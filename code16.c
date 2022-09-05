#include<stdio.h>
#define N 5
int stack[5];
int top=-1;
int value;
void push()
{
    if(top==N-1)
    {
        printf("\n Stck is over flow.");
    }
    else
    {
        printf("Enter a value for stack : "); 
        scanf("%d",&value);
        top=top+1;
        stack[top]=value;
    }
}
void pop()
{
    if(top==-1) 
    {
        printf("\n\nYour stack is under flow.");
    }
    else
    {
        value=stack[top];
        top--;
        printf("\n %d Item Delete from stack",value);

    }
}
void peep()
{
   int index;
   printf("\n Enter your location so I can give the value : ");
   scanf("%d",&index);
   if(index<0 || index>top)
   {
    printf("\n Invalid index..");
   }
   else
   {
    printf("\n Your %d position value is = %d",index,stack[index-1]);
   }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("\n Stack is Empty..");
    }
    else
    {
        printf("Your stack element are : ");
        for(i=0;i<=top;i++)
        {
            printf(" %d ",stack[i]);
        }
    }
}
int main()
{
    int n;
   do{
        printf("\n1.push.\n2.pop.\n3.display.\n4.peep.\n5.Exit.");
    printf("\n Enter Your choice above option : ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        push();
        break;
        case 2:
        pop();
        break;
        case 3:
        display();
        break;
        case 4:
        peep();
        break;
    }
   }while(n!=5);
    return 0;
}