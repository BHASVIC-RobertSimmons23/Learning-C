#include <stdlib.h>
#include <stdio.h>


// Creating a node with an item of data and a pointer
struct node {
    int value;
    struct node *next;
};

// print the linked list values
void printLinkedlist(struct node *p) {
    while (p != NULL) {
        printf("%d -> ", p->value);
        p = p->next;
    }
}

int main() {
    // Initialize nodes
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    // Allocate a block of memory
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    // Assign data values to be stored in the nodes
    one->value = 1;
    two->value = 2;
    three->value = 3;

    // Connect nodes to point to the next one
    one->next = two;
    two->next = three;
    three->next = NULL;

    // printing node-value
    head = one;
    printLinkedlist(head);
}