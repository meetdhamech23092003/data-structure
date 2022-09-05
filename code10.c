// write a program to insert an element in array using pointer
#include<stdio.h>
int main()
{
    int n,i;
    int location;
    printf("Enter The size of array : ");
    scanf("%d",&n);
    int arr[n],*ptr;
    ptr=&arr[n];
    printf("\n\n Enter The %d Elements : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nYour  %d Elements : ",n);
    for(i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
    printf("\nUp to %d size you can give your location :",n);
    scanf("%d",&location);
    
    if(location<0 || location>n)
    {
        printf("Invalid location");
    }
    else
    {
        for(i=location-1;i<n-1;i++)
        {
         arr[i]=arr[i+1];
        }
    printf("\n After deleting Element : ");
    for(i=0;i<n-1;i++)
    {
        printf(" %d ",arr[i]);
    }
    }


}