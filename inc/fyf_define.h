#ifndef _FYF_DEFINE_H_
#define _FYF_DEFINE_H_

/*===============================================================================

 File Name:fyf_define.h

 Author:fang li

 Create Time:2011-5-18
 
 Description:fyf define header

 History:
 2011-5-18 	V1.0.0 	create

===============================================================================*/
/*-------------------------------------------------------------------------------
	Include Files
-------------------------------------------------------------------------------*/
#include <stdio.h>
#include <string.h>
#include "fyf_type.h"

#define PATH_REGISTER    "register"
#define PATH_LOGIN       "login"

typedef struct FYAPP_UDP_QUEUE_MESSAGE_s
{
	BU08 *pBuf;
	BU32 bufSize;
} FYAPP_UDP_QUEUE_MESSAGE_t;	

#endif

