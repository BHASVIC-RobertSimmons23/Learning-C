#include <stdlib.h>
#include <stdio.h>

void push(int val);
int pop();


int stack[10]={}, top=0;
//line 11 works out the size of my array by dividing the array
//reserved memory by the data type it finds in the first index
int stackSize = sizeof(stack) / sizeof(stack[0]);

int main(){
    int choice=0;
    int val = 0;
    do{
        printf("Do you want to push(1), pop(2) or quit(3)?: ");
        scanf("%d",&choice);
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
    }while (choice!=3);
    return 0;
}

void push(int val) {
    return;
}

int pop() {
    return 0;
}
