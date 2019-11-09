main()
{
    //function to print the odd and the even number from an array
    int arr1[7];
    int arr2[7];
    printf("Enter the element in the arr1 :");
    for(int i=0;i<=6;i++)
    scanf("%d",&arr1[i]);
    printf("Enter the element in the second arr2 :");
    for(int i=0;i<=6;i++)
    scanf("%d",&arr2[i]);

    for(int i=0;i<=6;i++)
    {
        if(arr1[i]%2==0)
        {
            printf("\nthe num of arr1 is even %d",arr1[i]);
        }
        if(arr2[i]%2==0)
        {
            printf("\nthe num of arr2 is even %d",arr2[i]);
        }
    }
     for(int i=0;i<=6;i++)
        {
        if(arr1[i]%2!=0)
        {
            printf("\nthe num of arr1 is odd %d",arr1[i]);
        }
        if(arr2[i]%2!=0)
        {
            printf("\nthe num of arr2 is odd %d",arr2[i]);
        }
        }

}
