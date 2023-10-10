#include <stdlib.h>
#include <stdio.h>

void enqueue();
void dequeue();
void printQ();

int Q[10]={}, front=0, rear=0, inQ=0;
//line 11 works out the size of my array by dividing the array
//reserved memory by the data type it finds in the first index
int qSize = sizeof(Q) / sizeof(Q[0]);

int main(){
	int choice=0;
	do{
        printQ();
        printf("Do you want to add(1), remove(2) or quit(3): ");
        scanf("%d",&choice);
        if (choice == 1) enqueue();
        else if (choice == 2) dequeue();
        else if (choice == 3) break;
        else printf("Enter a valid choice.");
	} while (choice != 3);
	return 0;
}

void printQ(){
	printf("\n");
	for(int i=0; i < qSize; i++){
		printf("%d | ", Q[i]);
	}
	printf("\n\n");
}

void enqueue(){
    int newElement, formatCheck;
    printf("Enter an integer: ");
    do {
        formatCheck = scanf("%d", &newElement);
    } while (formatCheck == 0);
    Q[rear] = newElement;
    ++rear;

	//check for overflow

}

void dequeue(){
	//check for underflow

}
