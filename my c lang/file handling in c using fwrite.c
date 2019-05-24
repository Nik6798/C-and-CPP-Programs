#include<stdio.h>
typedef struct
{
    char name[10];
    int price;
    float rating;

}book;
main()
{  book b1;
    FILE *ptr;
    ptr=fopen("fwrite.txt","r");
     /*gets(b1.name);
     scanf("%d",&b1.price);
     scanf("%f",&b1.rating);
     fwrite(&b1,sizeof(b1),1,ptr);
     fclose(ptr);*/

     fread(&b1,sizeof(b1),1,ptr);
     printf("%s %d %f",b1.name,b1.price,b1.rating);
     fclose(ptr);
}
