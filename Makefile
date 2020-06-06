
#########工程目录########
ROOT_DIR = $(shell pwd)
SRC_DIR  = $(ROOT_DIR)/
OBJ_DIR  = $(ROOT_DIR)/obj
INC_DIR  = $(ROOT_DIR)/inc
LIB_DIR  = $(ROOT_DIR)/lib

#set  environment option
CC = gcc
LD = $(CC)

#编译选项
CC_FLAG = -Wall -I$(INC_DIR)

#链接动态库
BLD_LDFLAG-y = -L$(LIB_DIR)

# 可执行文件的名字
TARGET = hello

#这里递归遍历3级子目录
DIRS := $(shell find $(SRC_DIR) -maxdepth 3 -type d)

#将每个子目录添加到搜索路径
VPATH = $(DIRS)

#查找src_dir下面包含子目录的所有cpp文件
SRCS = $(foreach dir, $(DIRS), $(wildcard $(dir)/*.c))

# OBJS表示SRCS中把列表中的.c全部替换为.o，相当于：OBJS = main.o a.o b.o
OBJS = $(addprefix $(OBJ_DIR)/,$(patsubst %.c,%.o,$(notdir $(SRCS)))) 

# .PHONE伪目标，
.PHONY:all clean

# 要生成的目标文件
all:$(TARGET)
	$(warning =============================)
	$(warning compiled start)
	$(warning SRCS = $(SRCS))
	$(warning OBJS = $(OBJS))
	$(warning TARGET = $(TARGET))
	$(warning -----------------------------)

# 第一行依赖关系：冒号后面为依赖的文件，相当于Hello: main.o a.o b.o
# 第二行规则：$@表示目标文件，$^表示所有依赖文件，$<表示第一个依赖文件
$(TARGET): $(OBJS)
	$(LD) $^ $(BLD_LDFLAG-y) -o $@

# 上一句目标文件依赖一大堆.o文件，这句表示所有.o都由相应名字的.c文件自动生成
#编译之前要创建OBJ目录，确保目录存在
$(OBJ_DIR)/%.o:%.c
	if [ ! -d $(OBJ_DIR) ]; then mkdir -p $(OBJ_DIR); fi;\
	$(CC) -c $(CC_FLAG) -o $@ $<

clean:
	@echo "Removing linked and compiled files......;"
	rm -rf $(OBJ_DIR) $(TARGET)
