#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool doLogicGate(char* gateName, bool operand1, bool operand2);

int main() {
    char gate[10] = "";
    puts("Enter gate: ");
    gets(gate);
    bool operand1, operand2;
    int temp;
    puts("Enter input 1: ");
    fflush(stdin);
    scanf("%d", &temp);
    operand1 = temp;
    puts("Enter input 2: ");
    fflush(stdin);
    scanf("%d", &temp);
    operand2 = temp;
    bool result = doLogicGate(gate, operand1, operand2);
    printf("\nResult: %d", result);
    return 0;
}

bool doLogicGate(char* gateName, bool operand1, bool operand2) {
    if(strcmp(gateName, "AND") == 0) return operand1 & operand2;
    else if(strcmp(gateName, "OR") == 0) return operand1 | operand2;
    else if(strcmp(gateName, "XOR") == 0) return operand1 ^ operand2;
    else if(strcmp(gateName, "NAND") == 0) return ~(operand1 & operand2);
    else if(strcmp(gateName, "NOR") == 0) return ~(operand1 | operand2);

    printf("\nInvalid operator entered, returning false");
    return false;
}
