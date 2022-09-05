// // This is for linked list structure creation............
// // #include<stdio.h>
// // #include<stdlib.h>
// // struct node{
// //    int data;
// //    struct node *next;
// // };
// // void linkedlist_is_traversal(struct node *ptr)
// // {
// //     while(ptr!=NULL)
// //     {
// //         printf("Element is = %d\n",ptr->data);
// //         ptr=ptr->next;
// //     }
// // }
// // int main()
// // {
// //     struct node *head;
// //     struct node *seconde;
// //     struct node *third;
// //     struct node *fourth;
// //    // allocate memory for the node for the linked list
// //    head=(struct node *)malloc(sizeof(struct node));
// //    seconde=(struct node *)malloc(sizeof(struct node));
// //    third=(struct node *)malloc(sizeof(struct node));
// //    fourth=(struct node *)malloc(sizeof(struct node));


// // // link first and second nodes
// // head->data=7;
// // head->next=seconde;
// // // link second and third node 
// // seconde->data=11;
// // seconde->next=third;
// // // link third node and fourth node
// // third->data=56;
// // third->next=fourth;
// // // link fourth node and null
// // fourth->data=120;
// // fourth->next=NULL;
// // linkedlist_is_traversal(head);
// // return 0;
// // }
    

// insertion in linked list.................
#include<stdio.h>
#include<stdlib.h>
struct node{
     int data;
     struct node *next;
};
void linked_list_in_traversal(struct node *ptr)
{
   while (ptr!=NULL)
   {
      printf("%d\n",ptr->data);
      ptr=ptr->next;
   }
}
struct node *insert_at_first(struct node *head,int data)
{
     struct node *ptr=(struct node *)malloc(sizeof(struct node));
     ptr->next=head;
     ptr->data=data;
     return ptr;
}
struct node *insert_between_index(struct node *head,int data,int index)
{
   struct node *ptr=(struct node *)malloc(sizeof(struct node));
   struct node *p=head; 
   int  i=0;
   while (i!=index-1)
   {
     p=p->next;
     i++;
   }
   
   
}
int main()
{
     struct node *head;
     struct node *second;
     struct node *third;
     struct node *fourth;
     head=(struct node *)malloc(sizeof(struct node));
     second=(struct node *)malloc(sizeof(struct node));
     third=(struct node *)malloc(sizeof(struct node));
     fourth=(struct node *)malloc(sizeof(struct node));
     head->data=12;
     head->next=second;
     second->data=32;
     second->next=third;
     third->data=87;
     third->next=fourth;
    fourth->data=21;
    fourth->next=NULL;
    linked_list_in_traversal(head);
     head=insert_at_first(head,520);
    insert_between_index(head,14,2);
     printf("\nAfter inserting....\n");
    linked_list_in_traversal(head);
    return 0;
}
// #include<stdio.h>
// #include<stdlib.h>
// struct node
// {
//    int data;
//    struct node *next;
// };
// void insert_at_start(struct node** head,int data)
// {
//     struct node *newnode=(struct node *)malloc(sizeof(struct node));
//     newnode->data=data;
//     newnode->next=*head;
//     *head=newnode;
// }
// void inser_at_last(struct node** head,int data)
// {
//     struct node *newnode=(struct node *)malloc(sizeof(struct node));
//     newnode->data=data;
//     newnode->next=NULL;
//     if(*head==NULL)
//     {
//       *head=newnode;
//       return;
//     }
//     struct node *temp=*head;
//     while (temp->next!=NULL)
//     {
//           temp=temp->next;
//     }
//           temp->next=newnode;
// }
// void display(struct node* node)
// {
//     while (node!=NULL)
//     {
//       printf("%d\n",node->data);
//       node=node->next;
//     }
// }
// void delete_data(struct node** head,int delval)
// {
//      struct node *temp=*head;
//      struct node *previous;
//     //  case when there is only 1 node in the list
//     if(temp->next==NULL)
//     {
//       *head=NULL;
//       free(temp);
//       printf("\n Value %d is deleted \n",delval);
//       return;
//     }
//     // if the head not itself need to be deleted
//     if(temp!=NULL && temp->data==delval)
//     {
//       *head=temp->next;
//       printf("Value %d,deleted \n",delval);
//       free(temp);
//       return;
//     } 
//     while(temp!=NULL && temp->data!=delval)
//     {
//       previous=temp;
//       temp=temp->next;
//     }
//     if(temp==NULL)
//     {
//       printf("\nvalue not found.");
//       return;
//     }
//     previous->next=temp->next;
//     free(temp);
//  printf("Value %d, deleted \n",delval);
// }
// int main()
// {
//    struct node *head=NULL;
//    struct node *second=NULL;
//    struct node *third=NULL;
//    struct node *fourth=NULL;
//    head=(struct node *)malloc(sizeof(struct node));
//    second=(struct node *)malloc(sizeof(struct node));
//    third=(struct node *)malloc(sizeof(struct node));
//    fourth=(struct node *)malloc(sizeof(struct node));
//    head->data=521;
//    head->next=second;
//     second->data=324;
//    second->next=third;
//     third->data=20;
//    third->next=fourth;
//     fourth->data=78;
//    fourth->next=NULL;
//    printf("\nLinked list : \n");
//    display(head);
//    printf("\nAfter first side insering element : \n");
//    insert_at_start(&head,45);
//    display(head);
//    printf("\nAfter last side inserting element : \n");
//    inser_at_last(&head,120);
//    display(head);
//    delete_data(&head,324);
//    delete_data(&head,78);
//    printf("\n After deleting data : \n");
//    display(head);
//    return 0;
// }
   

