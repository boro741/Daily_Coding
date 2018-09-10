#include<stdio.h>
#define STACK_SIZE 3

int stack[STACK_SIZE], top = -1, n = 0;

void push(int x){
    if(top == STACK_SIZE - 1){
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = x;
    n++;
    printf("%d is pushed\n",x);
}

void pop(){
    int y;
    if(top == -1){
        printf("Stack Underflow\n");
        return;
    }
    y = stack[top];
    top--;

    printf("%d is popped\n",y);
}

void printStack(){
    int i;
    for(i=0;i <= top;i++){
        printf("%d ",stack[i]);
    }
}

int main(){
   pop();

    //printStack();

    return 0;
}