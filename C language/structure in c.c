#include<stdio.h>
struct date
{
    int d,m,y;
}d3;

struct library
{
    int book_no;
    char name[10];
    float price;

};
struct library get()
{
    struct library b;
    scanf("%d",&b.book_no);
    fflush(stdin);
    gets(b.name);
    scanf("%f",&b.price);
    return b;
};

void print(struct library b)
{
    printf("%d %s %f",b.book_no,b.name,b.price);
}
main()
{
    struct date d1={11,11,2018},d2;

    d2.d=12;
    d2.m=11;
    d2.y=2018;

    d3=d2;
    printf("%d:%d:%d",d3.d,d3.m,d3.y);


    struct library book={112,"thefairy",22.43};
    printf("%d\t%s\t%f",book.book_no,book.name,book.price);
    book=get();
    print(book);

}
