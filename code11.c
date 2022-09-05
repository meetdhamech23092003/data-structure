// Find the location of an element in 1-d array
// [Lo + c*(i-lb)]
#include<stdio.h>
int main()
{
   int n,i;
   printf("\n Enter the size of array : ");
   scanf("%d",&n);
   int arr[n],*ptr;
   ptr=&arr[n];
   for(i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }
   printf("\nyour array elements : \n");
   for(i=0;i<n;i++)
   {

   printf("arr[%d] = %d\n",i,arr[i]);
   }
   printf("\n Your array base address = %d",&arr[0]);
   int c=sizeof(int);
   printf("\n Enter your po for lo = ");
   scanf("%d",&i);
   int k= &arr[0]+ c*(i-0);
   printf("\n Your %d array location is = %d",i,k); 
   return 0;

}