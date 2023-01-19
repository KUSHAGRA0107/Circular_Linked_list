#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
typedef struct node node;
void insert_at_bg(node**head,node**tail,int data)
{
    node *new_node=(node*)malloc(sizeof(node));
    new_node->data=data;
    if(*head==NULL)
    {
        *head=new_node;
        *tail=new_node;
        new_node->next=*head;
    }
    else{
        new_node->next=*head;
        *head=new_node;
        (*tail)->next=*head;
    }
    
}
void print_list(node *head)
{
node* temp=head;
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
    node*Head=NULL;
    node*tail=NULL;
    insert_at_bg(&Head,&tail,1);
    insert_at_bg(&Head,&tail,2);
    insert_at_bg(&Head,&tail,3);
    insert_at_bg(&Head,&tail,4);
    print_list(Head);
}