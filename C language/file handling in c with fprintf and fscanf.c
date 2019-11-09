#include<stdio.h>
main()
{
    FILE *p,*q;
    int a=33,b=35,c;
    p=fopen("fprintfscanf.txt","r+");
    fprintf(p,"the sum of two number is which is sum of %d",a+b);
   fclose(p);
   q=fopen("fprintfscanf.txt","r+");
    fscanf(q,"the sum of two number is which is sum of  %d",&c);
    printf("%d",c);
}
