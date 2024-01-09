#include <stdlib.h>
#include <stdio.h>

void push(int val);
int pop();
void printStack();


int stack[10]={}, top=0;
//line 11 works out the size of my array by dividing the array
//reserved memory by the data type it finds in the first index
int stackSize = sizeof(stack) / sizeof(stack[0]);

int main(){
    int choice=0;
    int error = 0;
    int val = 0;
    do{
        printStack();
        printf("\nDo you want to push(1), pop(2) or quit(3)?: ");
        error = scanf("%d",&choice);
        if (choice==1){
            printf ("What value do you want to push?\n");
            scanf("%d",&val);
            push(val);
        } else if (choice==2){
            val = pop();
            printf ("popped value was = %d", val);
        }
        else if (choice==3) break;
        else printf("Enter a valid choice.");
    }while (choice!=3 || error == 0);
    return 0;
}

int* createStack(int size) {
    int stack[size]={}
}

void printStack(stack) {
    for(int i = stackSize - 1; i >= 0; --i) {
        printf("\n%d | %d", i, stack[i]);
    }
}

void push(int val) {
    if(stackSize == top) {
        printf("Stack is full!!!");
        return;
    }
    stack[top] = val;
    ++top;
}

int pop() {
    if (top == 0) {
        printf("Stack is empty!!!");
        return -1;
    }
    --top;
    int poppedValue = stack[top];
    stack[top] = 0;
    return poppedValue;
}
