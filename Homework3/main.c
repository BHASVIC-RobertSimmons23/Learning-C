#include <stdio.h>

double calculateTax(double grossSalary);
double calculateNI(double grossSalary);

int main() {
    double grossSalary;
    int formatCheck;
    do {
        printf("Enter gross salary: ");
        fflush(stdin);
        formatCheck = scanf("%lf", &grossSalary);
    } while (formatCheck == 0 || grossSalary < 0);
    double calculatedTax = calculateTax(grossSalary);
    double calculatedNIPerWeek = calculateNI(grossSalary);
    double calculatedNI = calculatedNIPerWeek * 52;
    double netSalary = grossSalary - calculatedTax - calculatedNI;
    printf("\nGross Salary: %f\nTax Paid: %f\nNI Paid: %f\nNet Salary: %f", grossSalary, calculatedTax, calculatedNI, netSalary);
    return 0;
}

double calculateNI(double grossSalary) {
    double weeklySalary = grossSalary / 52;
    double totalNI = 0;
    if (weeklySalary <= 190) return totalNI;
    weeklySalary -= 190;

    if(weeklySalary < 777) return totalNI += weeklySalary * 0.1325;
    weeklySalary -= 777;

    totalNI += weeklySalary * 0.0325;
    return totalNI;
}

double calculateTax(double grossSalary) {
    double totalTax = 0;
    if (grossSalary <= 12500) return totalTax;
    grossSalary -= 12500;

    if (grossSalary < 37500) return totalTax += grossSalary * 0.2;
    totalTax += 37500 * 0.2;
    grossSalary -= 37500;

    if(grossSalary < 100000) return totalTax += grossSalary * 0.4;
    totalTax += 100000 * 0.4;
    grossSalary -= 100000;

    totalTax += grossSalary * 0.45;
    return totalTax;
}