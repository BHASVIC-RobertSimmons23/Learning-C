#include <stdio.h>

const int taxBand1 = 12500;
const int taxBand2 = 50000;
const int taxBand3 = 150000;
const double taxRate2 = 0.2;
const double taxRate3 = 0.4;
const double taxRate4 = 0.45;

const int NIBand1 = 190;
const int NIBand2 = 967;
const double NIRate2 = 0.1325;
const double NIRate3 = 0.0325;

double calculateTax(double grossSalary);
double calculateWeeklyNI(double grossSalary);

int main() {
    double grossSalary;
    int formatCheck;
    do {
        printf("\nEnter gross salary: ");
        fflush(stdin);
        formatCheck = scanf("%lf", &grossSalary);
    } while (formatCheck == 0 || grossSalary < 0);
    double calculatedTax = calculateTax(grossSalary);
    double calculatedNIPerWeek = calculateWeeklyNI(grossSalary);
    double calculatedNI = calculatedNIPerWeek * 52;
    double netSalary = grossSalary - calculatedTax - calculatedNI;
    printf("\nGross Salary: %f\nTax Paid: %f\nNI Paid: %f\nNet Salary: %f", grossSalary, calculatedTax, calculatedNI, netSalary);
    return 0;
}

double calculateWeeklyNI(double grossSalary) {
    double weeklySalary = grossSalary / 52;
    double totalNI = 0;
    if (weeklySalary <= NIBand1) return totalNI;
    weeklySalary -= NIBand1;

    if(weeklySalary < (NIBand2 - NIBand1)) return totalNI += weeklySalary * NIRate2;
    totalNI += (NIBand2 - NIBand1) * NIRate2;
    weeklySalary -= (NIBand2 - NIBand1);

    totalNI += weeklySalary * NIRate3;
    return totalNI;
}

double calculateTax(double grossSalary) {
    double totalTax = 0;
    if (grossSalary <= taxBand1) return totalTax;
    grossSalary -= taxBand1;

    if (grossSalary < (taxBand2 - taxBand1)) return totalTax += grossSalary * taxRate2;
    totalTax += (taxBand2 - taxBand1) * taxRate2;
    grossSalary -= (taxBand2 - taxBand1);

    if(grossSalary < (taxBand3 - taxBand2)) return totalTax += grossSalary * taxRate3;
    totalTax += (taxBand3 - taxBand2) * taxRate3;
    grossSalary -= (taxBand3 - taxBand2);

    totalTax += grossSalary * taxRate4;
    return totalTax;
}