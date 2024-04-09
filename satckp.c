#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5

int top = -1;

void push(int stack[]) { 
    int user;
    if (top == ARRAY_SIZE - 1) {
        printf("stack is full \n");
    } else {
        printf("enter an element :");
        scanf("%d", &user);
        top++;
        stack[top] = user;
    }
}

void pop(int stack[]) { 
    int bkl;
    if (top == -1) {
        printf("stack is empty \n");
    } else {
        bkl = top;
        top--;
        printf("Element position %d from stack %d \n", bkl, stack[bkl]); 
}

void display(int stack[]) { 
    if (top == -1) {
        printf("stack is empty \n");
    } else {
        for (int i = top; i >= 0; i--) {
            printf("stack[%d] is %d\n", i, stack[i]);
        }
    }
}

int main() { 
    int teker;
    int stack[ARRAY_SIZE];
    printf("*************\n");
    printf("Enter your choice \n");
    printf("1.push\n2.pop\n3.display\n4.exit\n"); 
    printf("**********\n");

    do {
        printf("Enter your choice :");
        scanf("%d", &teker);
        switch (teker) {
            case 1:
                push(stack);
                break;
            case 2:
                pop(stack);
                break;
            case 3:
                display(stack);
                break;
            case 4:
                exit(0); 
            default:
                printf("enter valid choice\n");
                break;
        }
    } while (teker != 4);

    return 0; 

