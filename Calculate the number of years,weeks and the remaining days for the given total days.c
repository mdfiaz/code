#include <stdio.h>

int main() {
    int totalDays;


    printf("Enter total days: ");
    scanf("%d", &totalDays);


    int years = totalDays / 365;
    int remainingDays = totalDays % 365;
    int weeks = remainingDays / 7;
    int days = remainingDays % 7;

    //display the outputs
    printf("Number of Years: %d\n", years);
    printf("Number of Weeks: %d\n", weeks);
    printf("Number of Days: %d\n", days);

    return 0;
