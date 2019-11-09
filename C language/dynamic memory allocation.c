#include<stdlib.h>
main()
{  /*there are 2 types of memory alloction
    1.SMA(static memory allocation)
    2.DMA(Dynamic memory allocation)
   */
    int a=34; /*this is known as SMA(static memory allocation) and it also known as
               compile time memory allocation*/

    double *p;
    p=(double*)malloc(8);/*this type of memory allocation is known as DMA
                        if the assignment is not done than it takes garbage value*/
    *p=66377.343434;
    printf("%f\t%u\n",*p,sizeof(malloc(10)));

    /*
    there are 4 type of DMA function which are predefined

    1.malloc(2(byte)) -> it takes bytes as an arguments. In this it allocate 2byte of memory

    2.calloc(5(memory blocks),2(byte)) -> it takes two args
                    1st is how many continuous or linear blocks
                    2nd is how many byte each block should be

    3.realloc(ptr(&),byte) -> it takes address as an args
                    and it uses to change the dynamic memory that is assigned earlier

    4.free(ptr(&)) -> it takes address
                    it free the dynamic memory that is assigned*/

    int *pt;
    pt=calloc(5,4);//it is similar like array
    *(pt+0)=33;//before entering values the array contains 0 in each blocks it is not take garbage value
    *(pt+1)=444;
    int i=0;
    while(i<=4)
    {printf("\n%d",*(pt+i));
    i++;
    }
    int *ptr;
    ptr=realloc(pt,8);
     int j=0;
    while(j<=7)
    {printf("\n%d",*(ptr+j));
    j++;
    }

    free(p);
    free(ptr);
    free(pt);
}
