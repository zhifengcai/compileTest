/*===============================================================================

 File Name:fyf_type.h

 Author:fang li

 Create Time:2011-5-18
 
 Description:fyf type header

 History:
 2011-5-18 	V1.0.0 	create

===============================================================================*/
#ifndef _FYF_TYPE_H_
#define _FYF_TYPE_H_

#ifndef TYPE_BU08
#define TYPE_BU08
typedef unsigned char		BU08;
typedef BU08 *				PU08;
#endif

#ifndef TYPE_BS08
#define TYPE_BS08
typedef signed char		  	BS08;
typedef BS08 *			  	PS08;
#endif

#ifndef TYPE_BU16
#define TYPE_BU16
typedef unsigned short	  	BU16;
typedef BU16 *            	PU16;
#endif

#ifndef TYPE_BS16
#define TYPE_BS16
typedef signed short      	BS16;
typedef BS16 * 			  	PS16;
#endif

#ifndef TYPE_BU32
#define TYPE_BU32
typedef unsigned int     	BU32;
typedef BU32 *   			PU32;
#endif

#ifndef TYPE_BS32
#define TYPE_BS32
typedef signed int       	BS32;
typedef BS32 *            	PS32;
#endif

#ifndef TYPE_BU64
#define TYPE_BU64
typedef unsigned long long	BU64;
typedef BU64 *         		PU64;
#endif

#ifndef TYPE_BS64
#define TYPE_BS64
typedef long long     		BS64;
typedef BS64 *            	PS64;
#endif

#ifndef TYPE_BSTR
#define TYPE_BSTR			/*用于字符串的类型*/
typedef char 				BSTR;   
typedef BSTR * 				PSTR;   
#endif

#ifndef TYPE_BFLOAT
#define TYPE_BFLOAT
typedef float				BFLOAT;
typedef BFLOAT *			PFLOAT;
#endif

#ifndef TYPE_BDOUBLE
#define TYPE_BDOUBLE
typedef double 				BDOUBLE;
typedef BDOUBLE * 			PDOUBLE;
#endif

#define CONST				const

#ifndef FYF_NULL
#define FYF_NULL		((void *)0)	/* 指针0 */
#endif

#define FYF_ZERO		(0)			/* 数字0 */
/* 函数的返回统一使用FYF_NO_ERROR表现成功，和FYF_ERROR表示失败 */
#define FYF_NO_ERROR	(0)
#define FYF_ERROR		(1)

#define FYF_FALSE		(0)
#define FYF_TRUE   	 	(1)

#define FYF_THREAD_WAIT_FIFO		(0)
#define FYF_THREAD_WAIT_PRIO    	(1)

#define FYF_NO_WAIT					(0)
#define FYF_WAIT_FOREVER			(-1) 

#define FYF_OS_QUEUE_SEM_STATUS_AVAILABLE	   FYF_NO_ERROR
#define FYF_OS_QUEUE_SEM_STATUS_UNAVAILABLE    FYF_ERROR

typedef struct
{
    BU32 High;
    BU32 Low;
}FYF_Long64_s;

typedef struct
{
    BU32 x;
    BU32 y;
    BU32 w;
    BU32 h;
}FYF_Rect_s;

typedef struct
{
    BU32 PixelW;
    BU32 PixelH;
}FYF_Pixel_s;

typedef struct
{
    FYF_Rect_s rect;
    FYF_Pixel_s pixel;
}FYF_FormatRect_s;

typedef struct
{
    BU32 qlstWordOfMsg;
    BU32 q2ndWordOfMsg;
    BU32 q3rdWordOfMsg;
    BU32 q4thWordOfMsg;
}FYF_QUEUE_MESSAGE;

#endif

