#include<stdio.h>
#include<stdlib.h>


struct Node{
    int data;
    struct Node * next;
};

void traversalInLinkedList(struct Node *ptr){
    
    while (ptr != NULL)
    {
        printf("Element of the linked list = %d\n",ptr->data);
        ptr=ptr->next;
    }
    
}
//Insertion in LInked List

struct Node* insertionAtFirst(struct Node *head, int data){
    struct Node* ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=head;
    return ptr;

}

struct Node* insertionAtIndex(struct Node *head, int data,int index){
    struct Node* ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;

    int  i = 0 ;
    while (i != index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next=p->next;
    p->next = ptr;
    return head;

}

struct Node* insertAtTheEnd(struct Node *head, int data){
    struct Node* ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    while(p->next!=NULL)
    {
        p = p->next;

    }
    p->next= ptr;
    ptr->next=NULL;
    return head;

}

struct Node* insertAfterNode(struct Node *head,struct Node *previous, int data){
    struct Node* ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = previous->next;
    previous->next = ptr;
    return head;
    
}

//Deletion in LInked List
struct Node* deletingFirstElement(struct Node *head)
{
    struct Node* ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node* deletingAtIndex(struct Node *head,int index)
{
    struct Node* p = head;
    struct Node* q = head->next;
    int  i = 0 ;
    while (i != index-1)
    {
        p = p->next;
        q= q->next;
        i++;
    }
    p->next = q->next;
    free(q);
    return head;
}

struct Node* deletionAtKey(struct Node *head,int value)
{
    struct Node* p =  head ;
    struct Node* q = head->next;
    while(q->data!=value&&q->next!=NULL){
        p = p->next;
        q = q->next;
    }
    if(q->data ==value){
        p->next=q->next;
        free(q);
    }
    return head;
  
}

struct Node* deletionAtLast(struct Node *head)
{
    struct Node* p = head ;
    struct Node* q = head->next;

    while (q->next!=NULL)
    {
        p=p->next;
        q = q->next;
    }
    p->next=NULL;
    free(q);
    return head;
    
}




int main()
{
    struct Node *head ;
    struct Node *second ;
    struct Node *third ;

    //allocate memory for linked list in heap memory

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 7;
    head->next=second;

    second->data = 11;
    second->next=third;

    third->data = 15;
    third->next=NULL;
    printf("Insertion at the First Node\n");
    head = insertionAtFirst(head,10);
    traversalInLinkedList(head);

    printf("Insertion at the Index Node\n");
    head = insertionAtIndex(head, 70,4);
    traversalInLinkedList(head);

    printf("Insertion at the End Node\n");
    head = insertAtTheEnd(head, 190);
    traversalInLinkedList(head);

    printf("Insertion at the Targeted Node\n");
    head = insertAfterNode(head,second,69);
    traversalInLinkedList(head);


    printf("Deletion Of head Linked List\n");
    head = deletingFirstElement(head);
    traversalInLinkedList(head);

    printf("Deletion Of index Linked List\n");
    head - deletionAtKey(head,11);
    traversalInLinkedList(head);

    printf("Deletion Of After Node Linked List\n");
    head - deletionAtLast(head);
    traversalInLinkedList(head);
    return 0;
}