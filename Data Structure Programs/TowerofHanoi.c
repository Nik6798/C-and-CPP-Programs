#include<stdio.h>
void TOH(int,char,char,char);
main()
{
    char a='a',b='b',c='c';
    int n;
    printf("Enter the number of disk : ");
    scanf("%d",&n);
    TOH(n,a,b,c);
}

void TOH(int n,char BEG,char AUX,char END)
{
    if(n>=1)
    {
        TOH(n-1,BEG,END,AUX);
        printf("%c to %c\n",BEG,END);
        TOH(n-1,AUX,BEG,END);
    }
}
