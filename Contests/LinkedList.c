#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
} Node;

Node* createNode(int data){
    Node* newnode = (Node*)malloc(sizeof(Node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

void printList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){
    // Node* head = NULL;
    Node* head = createNode(40);
    Node* node2 = createNode(50);
    // head -> next = node1;
    head->next = node2;
    printList(head);
    return 0;
}