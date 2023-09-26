#include <stdio.h>

int main() {
    char dayType;
    float numChildTickets;
    float numAdultTickets;
    float totalChildPrice = 0;
    float totalAdultPrice = 0;
    int discountApplied = 0;

    do {
        printf("Enter W, S, or B character (Weekday, Sat/Sun, Bank holiday):");
        fflush(stdin);
        scanf("%c", &dayType);
    } while(!(dayType == 'W' || dayType == 'S' || dayType == 'B'));
    printf("%c", dayType);

    printf("How many adult tickets to you need: ");
    fflush(stdin);
    scanf("%f", &numAdultTickets);
    printf("How many child tickets to you need: ");
    fflush(stdin);
    scanf("%f", &numChildTickets);

    if(dayType == 'W') {
        totalChildPrice = numChildTickets * 5;
        totalAdultPrice = numAdultTickets * 8;
    } else if(dayType == 'S') {
        totalChildPrice = numChildTickets * 7.5f;
        totalAdultPrice = numAdultTickets * 12;
    } else if(dayType == 'B') {
        totalChildPrice = numChildTickets * 7.5f;
        totalAdultPrice = numAdultTickets * 14;
    }

    printf("Total adult ticket price is: %f\n", totalAdultPrice);
    printf("Total child ticket price is: %f\n", totalChildPrice);

    if (numChildTickets + numChildTickets > 8) {
        printf("Total price before discounts: %f", totalChildPrice + totalAdultPrice);
        totalAdultPrice *= 0.9f;
        totalChildPrice *= 0.9f;
        discountApplied = 1;
    }

    printf(discountApplied ? "Total price is: %f with 10 percent discount applied" : "Total price is %f", totalAdultPrice + totalChildPrice);
}
