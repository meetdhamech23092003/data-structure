#include<stdio.h>
int main()
{
	char str[100],*ptr;
	ptr=str;
	int i=0;
	int count=0;
	printf("\n Enter name : ");
	scanf("%s",ptr);
	while (*(ptr+i)!='\0')
	{
	   count++;
	   i++;
	}
	printf("\n string length= %d\n",count);
	printf("\n Reverse string is : ");
	for(i=count;i>=0;i--)
	{
		printf("%c",*(ptr+i));
	}
	return 0;
}