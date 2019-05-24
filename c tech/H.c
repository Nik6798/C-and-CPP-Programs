#include<stdio.h>
int main()
{
    int n;
    printf("Enter the valude :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("*");
        if(i==n/2)
                {
                    for(int k=0;k<n;k++)
                        printf("*");
                }
            if(i!=5)
            {
                for(int j=0;j<n;j++)
                {
                    printf(" ");

                }
            }

        printf("*");
        printf("\n");
    }
}
