main()
{
    char a[11];
    a[10]='\0';
    fun(9,a);

}
void fun(int n,char *b)
{static int count;
    if(n<0)
    {count++;
       printf(" %d %s ",count,b);
    }
    else
    {
        b[n]='0';
        fun(n-1,b);
        b[n]='1';
        fun(n-1,b);
    }
}
