#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head;

struct Node* Insert(struct Node* head, int data){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
    }else{
        struct Node* temp1 = head;
        while (temp1->next != NULL){
            temp1 = temp1->next;
        }
        temp1->next = temp;
        }

    return head;
};

void Print(struct Node* p)
{
    if(p == NULL) return;//Exit condition
    printf("%d", p->data);//First print the value in the node
    Print(p->next);//Recursive call
}

struct Node* Reverse(struct Node* head){
    struct Node *current, *next, *prev;
    current = head;
    prev = NULL;
    while(current != NULL){
        next = current->next;
        current->next = prev;// next globalna 
        prev = current;
        current = next;// next lokalna
    };
    head = prev;
    return head;
};

int main(){
    struct Node* head = NULL;
    head = Insert(head, 2);
    head = Insert(head, 4);
    head = Insert(head, 6);
    head = Insert(head, 8);
    
    Print(head);
    printf("\n");

    head = Reverse(head);
    printf("\n");


    Print(head);
    
};