#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define SIZE 10
char stack[SIZE];
int top = -1;

// VALID = [{()}]
//INVALID = {){[}}](

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
/** 

(()()))
ARRAY
step -1 => (
step -2 => ((
step -3 => (() -> (
step -4 => ((
step -5 => (() -> (
step -6 => (() -> () -> 
step -7 => )
 * */ 

int validBraces(char arr[]){
    int stringLength = strlen(arr);
    for (int i=0; i<stringLength; i++){
        if(arr[i]=='('){
            push(arr[i]);
        }else if (arr[i]==')'){
            if(top == -1){
                printf("No");
                return 0;
            }
            pop();
        }
    }
    if (top == -1){
        printf("Yes");
        return 1;
    }else{
        printf("No");
        return 0;
    }
}

int main(){

    char input[] = "((()()))";
    int length = strlen(input);
    // printf("%d \n", length);
    validBraces(input);
    return 0;
}