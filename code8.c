#include<stdio.h>
struct  students
{
    int rno;
    char name[20];
    int marks[5];
    

}s[10];
int main()
{
    struct students *ptr;
    ptr=&s[10];
    int n,i,j;
    int total=0;
    float per;
    printf("How many students would you like to put data?");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       printf("\nEnter Student name :");
       scanf("%s",(ptr+i)->name);
       printf("\nEnter student roll no :");
       scanf("%d",&(ptr+i)->rno);
       printf("\nEnter Three sub marks");
       for(j=0;j<3;j++)
       {
        printf("\nEnter sub %d marks: ",j+1);
        scanf("%d",&(ptr+i)->marks[j]);
       }
    }
     for(i=0;i<n;i++)
    {
         for(j=0;j<3;j++)
         {
        total+=(ptr+i)->marks[j];
        
         }
        printf("\n %d student total marks is = %d",i+1,total);
        per=total/3;
        printf("\n %d student percentage is = %f",i+1,per);
        total=0;
    }
    return 0;
}