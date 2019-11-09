#include"pch.h"
#include<stdio.h>
#include<conio.h>
struct node
{
  int info;
  struct node* link;
};
struct node* Start=NULL;
struct node* CreateNode()
{
  struct node* n;
  n=malloc(sizeof(struct node));
  return n;
}

void InsertValues()
{
  struct node* temp,*t;
  temp=CreateNode();
  fflush(stdin);
  printf("Enter the number");
  fflush(stdin);
  scanf("%d",&temp->info);
  temp->link=NULL;
  if(Start==NULL)
  {
    Start=temp;
  }
  else
  {
    t=Start;
    while(t->link!=NULL)
    {
      t=t->link;
    }
    t->link=temp;
  }
}
void DeleteValue()
{
  struct node* t2;

  if(Start==NULL)
  {
    printf("no deletion can be allowed\n");
  }
  else
  {t2=Start;
    Start=Start->link;
     free(t2);
  }

}

void PrintValue()
{
  struct node* p;

  if(Start==NULL)
  {
    printf("\nThe list is Empty");
  }
  else
  {
       p=Start;
      while(p->link!=NULL)
    {
  printf("%d",p->info);
  p=p->link;
}
}
}

int menu()
{int ch;
  printf("\n1.Insert the values in link list\n");
  printf("2.Delete the value from the link list\n");
  printf("3.Print the values of link list\n");
  printf("4.Exit\n");
  printf("Enter the value :");
  fflush(stdin);
  scanf("%d\n",&ch);

  return ch;
}
 int main()
 {
         while(1)
        {int ch;
        ch=menu();

  switch (ch)
  {

    case 1:InsertValues();
    break;
    case 2:DeleteValue();
    break;
    case 3:PrintValue();
    break;
    case 4:exit(0);
    break;
    default: printf("the entered input is wrong\n");
  }
     }
		 getch();
     return 0;


}
