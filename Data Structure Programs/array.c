main()
{
    int arr[]={20,33,1,342,43,455,765,2424,5,5,565464,424,434};
    int arr2[2][5]={{33,43,3,542,67},{9,76,456,44,66}};
    for(int i=0;i<(sizeof(arr)/4);i++)
    {
        printf("\n%d",arr[i]);

    }
     for(int i=0;i<2;i++)
        {   for(int j=0;j<5;j++)
            {printf("\t%d",arr2[i][j]);
            }
        }
}
