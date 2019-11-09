main()
{
    double n;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("the factorial is %d : ", fact(n));

}
int fact(int n)
{
    if(n>=1)
    {
        return (n*fact(n-1));
    }

    else
        return 1;
}
