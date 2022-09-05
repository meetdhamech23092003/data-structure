// write a program to find middle element of the array
#include<stdio.h>
int main()
{
    int n,i;
    do
    {
      printf("\nEnter The size of array: ");
    scanf("%d",&n);
    int arr[n],*ptr;
    ptr=&arr[n];
    if(n%2==0)
    {
        printf("\nYour number is even please enter odd number :");
    }
    else
    {

    printf("\nEnter Your %d Elements: ",n);
    for(i=1;i<=n;i++)
    {

    scanf("%d",ptr+i);
    }
    printf("\nThis is your elements : ");
    for(i=1;i<=n;i++)
    {
        printf(" %d ",*(ptr+i));
    }
    int value=*(ptr+n/2+1);
    printf("\n\nYour middle one is = %d",value);
    }
    }while(n%2==0);
    return 0;
}