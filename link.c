#include<stdio.h>
#include<stdlib.h>
struct node
{ 
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *current=NULL;
void display_list()
{
    struct node *ptr=head;
  
    while(ptr!=NULL)
    {
        printf("\n%d",ptr->data);
        ptr=ptr->next;
    }
}
void insert_first(int data)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=head;
    head=newnode;
}
int main()
{
    insert_first(78);
    insert_first(54);
    insert_first(54);
    display_list();
    return 0;
}

