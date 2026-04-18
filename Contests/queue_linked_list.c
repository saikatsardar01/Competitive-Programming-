#include <stdio.h>
#include <stdlib.h>
// 1 2 3
typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* front = NULL;
Node* rear = NULL;

void enqueue(int ele){
    Node* newNode = (Node*)malloc(sizeof(Node)); //memory
    newNode->data = ele;
    newNode->next = NULL;

    if(rear == NULL && front == NULL){
            front = newNode;
            rear = newNode;
    }
    else{
        rear->next = newNode;
        rear = newNode; 
    }
}

void dequeue(){
    if(front == NULL){
        printf("No Element");
        return;
    }
    Node* temp = front;
    front = front->next;
    if (front==NULL){
        rear = NULL;
    }
    free(temp);
}

void peek(){
    if (front==NULL){
        printf("No element there");
        return;
    }
    printf("%d \n", front->data);
}

void printQueue(){
    Node* temp = front;
    if(front == NULL){
        printf("No element");
        return;
    }
    while(temp != NULL){
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL \n");
}

int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    printQueue();
    peek();
    dequeue();
    printQueue();
    peek();
    dequeue();
    dequeue();
    dequeue();
    printQueue();
    return 0;
}