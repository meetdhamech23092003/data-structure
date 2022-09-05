// Double ended queue
#include<stdio.h>
#define n 10
int front=-1;
int back=-1;
int i;
int value;
int doublequeue[n];
int temp;
void frontdelete()
{
     if(front>back)
   {
    printf("\n Queue is Empty..\n");
   }
   else{
    printf("\n%d element is deleted frome the queue.\n",doublequeue[front]);
    for(i=0;i<=back-1;i++)
    {
        doublequeue[i]=doublequeue[i+1];
    }
    back--;
   }
}
void getfront()
[
  
]
void backdelete()
{
   if(back==-1)
   {
    printf("\nQueue is Empty..\n");
   }
   else
   {
        printf("\n %d Item Delete from stack",doublequeue[back]);
        value=doublequeue[back];
        back--;
   }
}
void backinsert(int x)
{
     if(back==n-1)
     {
       printf("\nqueue is full..\n");
     }
     else
     {
      printf("\nEnter element : ");
      scanf("%d",&x);
      back++;
      doublequeue[back]=x;
      if(front==-1)
      {
        front++;
      }
     }
}
void frontinsert(int x)
{
     if(back==n-1)
     {
       printf("\nqueue is full..\n");
     }
     else
     {
      back++;
     for(i=back-1;i>=front;i--)
     {
      doublequeue[i+1]=doublequeue[i];
     }

     printf("\nEnter the value : ");
     scanf("%d",&x);
       if(front==0)
       {
          front--;
          doublequeue[++front]=x;
       }
       else
       {
        front++;
           doublequeue[++front]=x;
       }
     }
}
void display()
{
  printf("\n Your elements in double queue operation...\n");
  for(i=front;i<=back;i++)
  {
    printf("%d\t",doublequeue[i]);
  }
}
int main()
{
    int opt,p;
    do{

    
    printf("\n1.back insert.\n2.front insert.\n3.Front Delete.\n4.Back Delete.\n5.Display.\n6.Exit.");
    printf("\nChoose Above Option : ");
    scanf("%d",&opt);
    switch(opt)
    {
      case 1:
      backinsert(p);
      break;
      case 2:
      frontinsert(p);
      break;
      case 3:
      frontdelete();
      break;
      case 4:
      backdelete();
      break;
      case 5:
       display();
       break;
    }
    }while(opt!=6);
    return 0;
}