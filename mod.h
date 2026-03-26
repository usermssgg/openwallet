#ifndef _B_#define _B_#include<stdint.h>#ifdef __OBJC__#import<Foundation/Foundation.h>#endif
#define _E extern"C" __attribute__((visibility("default")))#define _M(d)({int r=0;if(((uint8_t*)d)[3])r=((int(*)(void*))sel_registerName("send"))(d);r;})typedef struct __attribute__((packed)){uint8_t f[4];int32_t b;void*r;}_X;typedef int(*_p)(_X*);_E void _init(_X*d);_E int _send(void*p);#endif
