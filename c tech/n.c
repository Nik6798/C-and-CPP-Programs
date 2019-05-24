#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("Enter the how large you want your N letter");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("*");
        for(j=n-i;j>0;j--)
        {

            printf(" ");
        }
        printf("*");
        printf("\n");

    }
}
