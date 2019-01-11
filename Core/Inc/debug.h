#ifndef __DEBUG_

#define __DEBUG_



#include <stdio.h>



#define APP_DEBUG





#ifdef APP_DEBUG

#define debug_printf(format,...) printf(">> Line: %05d, Function: %s: loginfo: "format"",__LINE__, __FUNCTION__, ##__VA_ARGS__)

#else

#define debug_PRINT(...) do{}while(0)

#endif



#endif







