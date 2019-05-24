/*main()
{
    const int a=77;
    int b=&a;
    int j,*k;
    j=453;
    k=&j;
    printf("%d\n%u",j,k);
    printf("\n%d\n%d",*k,*&j);
    printf("\n%u\n%u",&k,&j);
    printf("\n%u\n%u",&a,&b);
    printf("\n%d",a);
}*/
main()
{
    char n='6';
    char *a=&n;
    printf("%u\n%c",a,*a);
}
