#include "stdio.h"
#include "conio.h"
//#include "C:\Users\asus\Documents\my workspace\structure in c.c"

main()
{
#define fun(a,b) a+b
printf("the sum of two number %d",fun(4,5));
#undef fun
//printf("the sum of two number %d",fun(4,5));
#define fu(a,b) a-b
#ifdef fu
printf("what are you doing");
#endif // fu
#ifndef fu
 printf("\nwhar i can do ");
#endif // fu
#define country nnik
#if country==nikh
printf("what can");
#elif country==india
printf("what can i say");
#else
printf("ommmmm");
#endif // country
}
