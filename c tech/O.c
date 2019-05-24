#include<stdio.h>
void main()
{
    int n=10;
    int i;
    for(i=1;i<n;i++);
    {
        for(int j=10;j>i;j--)
        {
            printf(" ");
        }
        printf("*\n");

    }

}
