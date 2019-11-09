#include<stdio.h>
struct arraystack
{
    int top;
    int unsigned cap;
    int * array;
};

struct arraystack* creatstack(int c)
{
    struct arraystack* pt;
    pt=(struct arraystack*)malloc(sizeof(struct arraystack));
    pt->cap=c;
    pt->top=-1;
    pt->array=malloc(pt->cap*4);
    return pt;
}
int isfull(struct arraystack* stack)
{
    if(stack->top==(stack->cap)-1)
        return 1;
    else
        return 0;

}
 int isempty(struct arraystack* stack)
 {
     if(stack->top==-1)
     return 1;
     else
        return 0;
 }

void push(struct arraystack* stack,int item)
{
    if(!isfull(stack))
    {
        stack->top++;
        stack->array[stack->top]=item;
    }
    else
        return -1;
}

int pop(struct arraystack* stack)
{int item;
    if(!isempty(stack))
    {
        item=stack->array[stack->top];
        stack->top--;
        return item;
    }
    else
        return -1;
}

void print(struct arraystack* stack)
{int i=0;
    while(i<(stack->top))
    {
        printf("\n%d ",stack->array[i]);
        i++;
    }
}

main()
{
    int ch,item;
    struct arraystack* li;
    li=creatstack(3);

    while(1)
    {
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Print");
        printf("\n4. Exit");
        printf("\nEnter your choice :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\nEnter an element :");
                    scanf("%d",&item);
                    push(li,item);
                    break;
            case 2:item=pop(li);
                if(item==-1)
                    printf("the array is empty");
                printf("\nthe pop element is : %d",item);
            case 3:print(li);
            break;
            case 4:exit(0);
            break;
            default :printf("the value is wrong");
        }
    }
}





