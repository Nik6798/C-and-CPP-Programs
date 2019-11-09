/*Recursion:When a function calling itself than that function is called recursion*/
main()
{
    int x,n;
    printf("Enter the number to find the sum : ");
    scanf("%d",&n);
    x=rec(n);
   printf("the sum of first %d natural number is %d",n,x);
}

int rec(int a)
{
    int b;
    if(a==1)
    return a;
    b=a+rec(a-1);
    return b;
}
