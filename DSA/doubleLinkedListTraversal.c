#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node*next;
    struct Node *prev;

};


void doublyLinkedListTraversal(struct Node *head)
{
    struct Node *start = head;
    while(start->next!=NULL)
    {
        printf("The Doubly Linked Forward List Element is %d\n",start->data);
        start=start->next;  
    }
    
    while (start!=NULL)
    {
        printf("The Doubly Linked Forward List Element is %d\n",start->data);
        start = start->prev;
       
    }

    /*truct node *p;
p=root;

while(p->next=NULL)
p=p->next;

while(p!=NULL)
{
printf("%d",p->info);
p=p->prev;
}*/
    
    

}


int main()
{

    struct Node *head ;
    struct Node *second ;
    struct Node *third ;
    struct Node *fourth ;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    head->prev=NULL;
    head->data=1;
    head->next=second;

    second->prev=head;
    second->data=2;
    second->next=third;
    
    third->prev=second;
    third->data=3;
    third->next=fourth;

    fourth->prev=third;
    fourth->data=4;
    fourth->next=NULL;
    doublyLinkedListTraversal(head);

    


}