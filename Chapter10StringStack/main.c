#include <stdlib.h>
#include <stdio.h>

void push(char val);
void printStack();


char stack[100]={}, top=0;
//line 11 works out the size of my array by dividing the array
//reserved memory by the data type it finds in the first index
int stackSize = sizeof(stack) / sizeof(stack[0]);

int main(){
    char string[99] = "";
    printf("Enter a string to push into the stack: ");
    gets(string);
    for(int i = 98; i >= 0; --i) {
        if(!(string[i] == ' ' || string[i] == '\000')) {
            push(string[i]);
        }
    }
    printStack();
}

void printStack() {
    for(int i = stackSize - 1; i >= 0; --i) {
        if(stack[i] != ' ' && stack[i] != '\000') printf("\n%d | %c", i, stack[i]);
    }
}

void push(char val) {
    if(stackSize == top) {
        printf("Stack is full!!!");
        return;
    }
    stack[top] = val;
    ++top;
}
