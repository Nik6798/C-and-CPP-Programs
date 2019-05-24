#include<stdio.h>
#include<conio.h>

struct node
{
    int info;
    struct node *forward,*backward;
};

struct node *Start=NULL;
struct node* Makelist()
{
  struct node* n;
  n=(struct node*)malloc(sizeof(struct node));
  printf("Enter the value");
  scanf("%d",&n->info);
  n->forward=NULL;
  n->backward=NULL;
  if(Start==NULL)
  {
      Start=n;
  }
  else
  {
    Start->backward=n;
    n->forward=Start;
    Start=n;
  }
}

void Delete()
{struct node* d;
    d=Start;
    if(Start==NULL)
    {
        printf("the linklist is empty");
    }
    else
    {
      Start=d->forward;
      Start->backward=NULL;
        free(d);

    }
}

void viewlist()
{
    struct node* pri;
    pri=Start;
    if(Start==NULL)
    {
        printf("the linklist is empty");
        printf("%d",pri->info);

    }
    else
    {
        while(pri->forward!=NULL)
        {
            printf("%d",pri->info);
            pri=pri->forward;
        }
    }
}
main()
{
   Makelist();
   viewlist();
   Delete();
   viewlist();

}
