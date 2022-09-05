// write a program to find legth of the string using pointer
#include<stdio.h>
int main()
{
   char str[200],*p;
   p=&str[200];
   int length;
   int count=0;
   printf("Enter your string name: ");
   scanf("%s",p);
   while(*p!='\0')
   {
    count++;
    p++;
   }
   length=count-1;
   printf("Your string legth is= %d",length);
   return 0;
}