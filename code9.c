// write a program to insert an element in array using pointer
#include<stdio.h>
int main()
{
    int n,i;
    int loc,val;
    int *p;
    p=&val;
    printf("\nEnter the size = ");
    scanf("%d",&n);
    int arr[n],*ptr;
    ptr=&arr[n];
    printf("\nEnter the %d size elemens : \n",n);
    for(i=0;i<n;i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",ptr+i);
    }
    printf("\nYour elements =\n");
    for(i=0;i<n;i++)
    {
         printf("\na[%d] = ",i);
        printf("%d",*(ptr+i));
    }
    do{
    printf("\nEnter up to %d size location :");
    scanf("%d",&loc);
    n++;
    if(loc<0 || loc>n-1)
    {
        printf("\nRenter your location :");
        n--;
    }
    else
    {
        printf("\nGive me value for %d location ",loc);
        scanf("%d",p);
        for(i=n-1;i>=loc-1;i--)
        {
            *(ptr+i+1)=*(ptr+i);
        }
        *(ptr+(loc-1))=*p;
        printf("\nAfter insertion :\n");
        for(i=0;i<n;i++)
    {
        printf("\na[%d] = ",i);
        printf("%d",*(ptr+i));
    }
    }

    }while(loc>0 && loc<=n-1);
    return 0;
}