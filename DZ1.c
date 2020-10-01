#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STACK_SIZE 100

static int stack[STACK_SIZE];
static int top = -1;

void push(int n){
    if (top + 1 < STACK_SIZE) {
        stack[++top] = n;
    } else {
        printf("stack full\n");
    }
}

int pop(void){
    if (top != -1) {
        return stack[top--];
    } else {
        printf("stack empty\n");
        return 0;
    }
}

void print(void){
    for(int i=top; i>=0; i--){
        printf("%d | %d\n", top-i+1, stack[i]);
    }
}

int main(void){
    while(1){
        int i=0;
        printf("1 for push\n");
        printf("2 for pop\n");
        printf("3 for print\n");
        scanf("%d", &i);
        if(i==1){
            scanf("%d", &i);
            push(i);
        } else if(i==2){
            printf("pop return %d\n", pop());
        } else if(i==3){
            print();
        }
    }
    return 0;
}


