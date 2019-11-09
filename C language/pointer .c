/*pointer are basically special type of variable that are used to store the address as data*/

main()
{
    int *po,p;
    double *p1,p0;
    char *p2,p3;

    po=&p;
    p1=&p0;
    p2=&p3;

    printf("%d\t%c",po,p2);
    printf("\n%d\t%c",*po,*p2);
    printf("\n%d\t%c",*&po,*&p2);
    printf("\n%d\t%c",&*po,&*p2);
}
