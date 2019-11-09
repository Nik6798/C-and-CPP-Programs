/*main()
{
    int m=44,*b,**n;
    b=&m;
    n=&b;

    printf("%u\t%d",b,n);
    printf("\n%d\t%d",*b,**n);
}*/
char* reverse(char*);
main()
{char arr[9]="computers";
    printf(arr);
    printf("\n%d",strlen(arr));
    printf("\n%d",strlen("computer"));
    printf("\n%d",length(arr));
    printf("\n%s",reverse(arr));
}
int length(char *p)
{int i;
    for(i=0;*(p+i)!='\0';i++);
    return i;
}
char* reverse(char *o)
{
    int i,l;
    char t;
   l=length(o);
   printf("\n%d",l);
    for(i=0;i<l/2;i++)
    {
        t=*(o+i);
        *(o+i)=*(o+l-1-i);
        *(o+l-1-i)=t;

    }
    return o;
}
