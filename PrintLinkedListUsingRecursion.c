#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

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
    if(p == NULL) { //Exit condition
        printf("\n");
        return;
    };
    //printf("%d", p->data);//First print the value in the node
    Print(p->next);//Recursive call
    printf("%d", p->data);//First print the value in the node
    // prvi printf stampa redom, ako ide posle recursive onda je reverse
}

int main()
{
    struct Node* head = NULL; // local variable
    head = Insert(head, 2);
    head = Insert(head, 4);
    head = Insert(head, 6);
    head = Insert(head, 5);

    Print(head);
}