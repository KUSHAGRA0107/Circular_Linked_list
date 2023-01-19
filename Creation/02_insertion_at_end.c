#include<stdio.h>
#include<stdlib.h>
struct Cl{
    int data;
    struct Cl *next;
};
void insertion_at_beginning(struct Cl **head,int data)
{
    struct Cl *new_node=(struct Cl*)malloc(sizeof(struct Cl*));
    new_node->data=data;
    if(*head==NULL)
    {
        *head=new_node;
        new_node->next=*head;
    }
    else{
        struct Cl* start=*head;
        while (start->next!=*head)
        {
            start=start->next;
        }
        new_node->next=*head;
        *head=new_node;
        start->next=*head;
        
    }
}
void insert_at_end(struct Cl**head,int data)
{
    struct Cl *new_node=(struct Cl*)malloc(sizeof(struct Cl*));
    new_node->data=data;
    struct Cl* start=*head;
        while (start->next!=*head)
        {
            start=start->next;
        }
        start->next=new_node;
        new_node->next=*head;
}
void print_list(struct Cl *head)
{
struct Cl* temp=head;
while (temp->next!=head)
{
printf("%d-->",temp->data);
temp=temp->next;
}
printf("%d-->",temp->data);
printf("\n");
}
int main()
{
struct Cl* head=NULL;
insertion_at_beginning(&head,1);
insertion_at_beginning(&head,2);
insertion_at_beginning(&head,3);
insertion_at_beginning(&head,4);
insertion_at_beginning(&head,5);
insert_at_end(&head,7);
print_list(head);

}