#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head;

void Reverse(struct Node* p){
    if (head == NULL){//Exit condition

        return head;
    };
    Reverse(p->next);
    struct Node* q = p->next;
    q->next = p;
    q->next = NULL;
}

int main(){

};