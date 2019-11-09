/*main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    swap(&a,&b);

}
void swap(int *p,int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
    printf("the value of a is=%d\nand the value of b is=%d",*p,*q);
}
*/

//p=&a or you can also write p=&a[0]

main()
{
    int a[8];
    print(a);
}

void print(int *p)
{
for(int i=0;i<=7;i++)
{
    printf("Enter values in the %d index of array",i);
    scanf("%d",p+i);
}

}

