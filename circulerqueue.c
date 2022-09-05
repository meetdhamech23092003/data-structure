#include<stdio.h>
#define n 5
int front=-1;
int back=-1;
int queue[n];
int i;
void enqueue(int c)
{
    if(front==-1 && back==-1)
    {
        front=back=0;
        printf("\nEnter Value : ");
        scanf("%d",&c);
        queue[back]=c;
    }
    else if(((back+1)%n)==front)
    {
        printf("\nqueue is Full.\n");
    }
    else
    {
        back=(back+1)%n;
        printf("\nEnter Value : ");
        scanf("%d",&c);
        queue[back]=c;
    }
}
void dequeue()
{
    if(front==-1 && back==-1)
    {
      printf("\nQueue is Empty.\n");
    }
   else if(front==back)
    {
       front=back=-1;
    }
    else
    {
        printf("%d is Deleted from Queue.\n",queue[front]);
        front=(front+1)%n;
    }

}
void peek()
{
    printf("\npeek Element-- = %d",queue[front]);
}
void display()
{
     if(front==-1 && back==-1)
    {
      printf("\nQueue is Empty.\n");
    }
    else
    {
        printf("\nyour queue elements : \n");
        i=front;
        while (i!=back)
        {
           printf("%d\t",queue[i]);
           i=(i+1)%n;
        }
        printf("%d",queue[back]);
    }
}
int main()
{
    int opt,p;
   do{
       printf("\n1.Enqueue.\n2.Dequeue\n3.display.\n4.peek.\n5.Exit");
       printf("\nChoose the above Option : ");
       scanf("%d",&opt);
       switch(opt)
       {
        case 1:
        enqueue(p);
        break;
        case 2:
        dequeue();
        break;
        case 3:
        display();
        break;
        case 4:
        peek();
        break;
        default:
        printf("\n Invalid Input.........\n");
        break;
       }
   }while(opt!=5);
   return 0;
}