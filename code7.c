// 
#include<stdio.h>
struct  students
{
    int rno;
    char name[20];
    int marks[5];
    

};
int main()
{
    struct students s[10];
    int n,i,j;
    int total=0;
    float per;
    printf("How many students would you like to put data?");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       printf("\nEnter Student name :");
       scanf("%s",s[i].name);
       printf("\nEnter student roll no :");
       scanf("%d",&s[i].rno);
       printf("\nEnter Three sub marks");
       for(j=1;j<=3;j++)
       {
        printf("\nEnter sub %d marks: ",j);
        scanf("%d",&s[i].marks[j]);
       }
    }
     for(i=0;i<n;i++)
    {
         for(j=1;j<=3;j++)
         {
        total+=s[i].marks[j];
        
         }
        printf("\n %d student total marks is = %d",i+1,total);
        per=total/3;
        printf("\n %d student percentage is = %f",i+1,per);
        total=0;
    }
    return 0;
}