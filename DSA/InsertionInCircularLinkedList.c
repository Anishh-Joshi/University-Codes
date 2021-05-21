#include<stdio.h>
#include<stdlib.h>


struct Node{
    int data;
    struct Node * next;
};

void traversalInLinkedList(struct Node *head){
    struct Node* ptr = head;
    printf("Element of the Circular linked list = %d\n",ptr->data);
    ptr = ptr->next;
    while (ptr != head)
    {
        printf("Element of the Circular linked list = %d\n",ptr->data);
        ptr=ptr->next;
    }
    
}
//Insertion in LInked List

struct Node* insertionAtFirst(struct Node *head, int data){
    struct Node* ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head->next;
    ptr->data = data;
    while(p->next != head){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
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
    third->next=head;
    traversalInLinkedList(head);
    head = insertionAtFirst(head,01);
    traversalInLinkedList(head);

}