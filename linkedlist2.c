// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// int main()
// {
//     int n;
//     struct node *head;
//     struct node *second;
//     struct node *third;
//     struct node *fourth;
//     head=(struct node *)malloc(sizeof(struct node));
//     second=(struct node *)malloc(sizeof(struct node));
//     third=(struct node *)malloc(sizeof(struct node));
//     fourth=(struct node *)malloc(sizeof(struct node));
//     printf("\nEnter First Data :");
//     scanf("%d",&n);
//     head->data=n;
//     head->next=second;
//     printf("\nEnter second Data :");
//     scanf("%d",&n);
//     second->data=n;
//     second->next=third;
//     printf("\nEnter third Data :");
//     scanf("%d",&n);
//     third->data=n;
//     third->next=fourth;
//     printf("\nEnter fourth Data :");
//     scanf("%d",&n);
//     fourth->data=n;
//     fourth->next=NULL;
//     while(head!=NULL)
//     {
//         printf("\n%d",head->data);
//         head=head->next;
//     }
//     return 0;    
// }


// Linked list insertion...........
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//     int data;
//     struct node *next;
// };
// void set_first(struct node **head_ref,int new_data)
// {
//     printf("\nEnter Number :");
//     scanf("%d",&new_data);
//     struct node *newnode=(struct node*)malloc(sizeof(struct node));
//     newnode->data=new_data;
//     newnode->next=*head_ref;
//     *head_ref=newnode;
// }
// void printlist(struct node *node)
// {
//     printf("\nYour Elements :\n");
//     while(node!=NULL)
//     {
//         printf("%d\n",node->data);
//         node= node->next;
//     }
// }
// void set_last(struct node **head_ref,int new_data)
// {
//     printf("Enter Num :");
//     scanf("%d",&new_data);
//    struct node *newnode=(struct node *)malloc(sizeof(struct node));
//    struct node *last=*head_ref;
//    newnode->data=new_data;
//    newnode->next=NULL;
//    if(*head_ref==NULL)
//    {
//     *head_ref=newnode;
//    }
//    while(last->next!=NULL)
   
//     last=last->next;
   
//    last->next=newnode;
// }

// int main()
// {
//     int opt,x,p,val;
//       struct node* head=NULL;
//       while(1)
//       {
//         printf("\n1.push.\n2.Show.\n3.Last Element.\n4.Given position.\n5.Exit.");
//         printf("\nEnter The Above Choice :");
//         scanf("%d",&opt);
//         switch(opt)
//         {
//             case 1:
//             set_first(&head,x);
//             break;
//             case 2:
//             printlist(head);
//             break;
//             case 3:
//             set_last(&head,x);
//             break;
//             case 5:
//             exit(0);
//         }
//       }
//       return 0;
// }


// insertion in linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void insert_data(struct node **head,int new_data)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode=*head;
    newnode->data=new_data;
    newnode->next=NULL;

}
void printlist(struct node *node)
{
    printf("\nYour Elements.....\n");
    while(node!=NULL)
    {
        printf("\n%d",node->data);
        node=node->next;
    }
}
int main()
{
    struct node *head=NULL;
    insert_data(&head,45);
    printf("\nYour Elements :");
    insert_data(&head,12);
    printlist(head);
    return 0;
}