#include<conio.h>
#include<stdio.h>
void main()
{
 int i,j,k,n;
 clrscr();
 printf("Enter the number of lines to be printed");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
       for(j=n-i-1;j>0;j--)
              printf(" ");
       printf("*");
       for(k=2*i-1;k>0;k--)
              printf(" ");             //code for upper triangle
       if(i!=0)
              printf("*");
       printf("\n");
  }
  for(i=n-1;i>0;i--)
  {
       for(j=0;j<n-i;j++)
              printf(" ");
       printf("*");                  //code for lower triangle
        for(k=2*i-3;k>0;k--)
             printf(" ");
       if(i!=1)
              printf("*");
       printf("\n");
    }
  getch();
}

