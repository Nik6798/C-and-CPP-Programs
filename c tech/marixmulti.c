#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j,k,r1,c1,r2,c2,sum=0;

    printf("Enter the the number of rows and coulombs for the 1st matrix :");
    scanf("%d%d",&r1,&c1);
    printf("\nEnter the number of rows and coulombs for the 2nd matrix :");
    scanf("%d%d",&r2,&c2);

    if(c1!=r2)
    {
        printf("\nMatrix multiplication is not possible");
        exit(0);
    }

    printf("\nEnter the elements for the 1st matrix :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);

        }

    }

    printf("\nEnter the elements for the 2nd matrix :\n");
       for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);

        }

    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            sum=0;
        }
    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
