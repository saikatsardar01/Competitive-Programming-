#include <stdio.h>

#define SIZE 10

char stack[SIZE];
int top = -1;

void push(char data){
    if (top==SIZE-1){
        printf("The Stack is full \n");
        return;
    }
    else{
        top = top+1;
        stack[top] = data;
    }
}

void pop(){
    if(top == -1){
        printf("No element Left");
    }
    else{
        top = top - 1;
    }
}

void printStack(){
    int temp = 0;
    if (top==-1){
        printf("No element in the stack");
    }
    else{
        for(temp;temp<=top;temp++){
            printf("%c ", stack[temp]);
        }
    }

    printf("\n");
}

char peek(){
    if (top == -1){
        return 0;
    }
    else{
        return stack[top];
    }
}

int presentSize(){
    if(top == -1){
        return 0;
    }else{
        int size = top + 1;
        return size;
    }
}

int main(){

    // push(1);
    // push(2);
    // push(3);
    // push(4);
    // push(5);
    // push(6);
    // printStack();
    // pop();
    // presentSize();
    push('A');
    printStack();
    push('B');
    push('C');
    printStack();
    // printf(" \n %d",presentSize());
    return 0;
}