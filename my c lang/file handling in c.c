#include"stdio.h"
main()
{   int ent;
    FILE *fh;
    fh=fopen("file.txt","w");
    //char arr[]="my name is nikhil saini";
    char arr[1000];
    while(1)
    {
        printf("Enter the string you want to write in your file: ");
        fflush(stdin);
        gets(arr);
        //puts(arr);

    //if(fh==NULL)
        //printf("the file is open already");

    for(int i=0;i<strlen(arr);i++)
    {
        fputc(arr[i],fh);
    }
    printf("Select from one of these options");
    printf("\n1.write in existing file again\n2.exit\n");
    scanf("%d",&ent);
    if(ent==2)
    {
        fclose(fh);
        exit(0);
    }
    else if(ent!=1)
        printf("wrong input\n");
    }


}
