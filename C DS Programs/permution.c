#include<stdio.h>
void swap(char *a,char *b)
{
    char ch;
    ch=*a;
    *a=*b;
    *b=ch;
}

main()
{
    char s[1000];
    printf("Enter the string :");
    gets(s);
    per(s,0,strlen(s));
}
void per(char *s,int i,int n)
{
    static int count;
    int j;
    if(i==n)
    {   count++;
        printf("%s\n",s);
    }
    else
    {
        for(j=i;j<n;j++)
        {
            swap(s+i,s+j);
            per(s,i+1,n);
            swap(s+i,s+j);
        }
    }

}










