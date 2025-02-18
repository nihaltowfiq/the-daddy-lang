/*
  Check Leap Year
  A year is a leap year if:
    • It is divisible by 4 and not divisible by 100, OR
    • It is divisible by 400.
  Write a C program to check if a given year is a leap year.ar
*/

#include <stdio.h>

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d is a leap year\n", year);
    } else {
        printf("%d is not a leap year\n", year);
    }

    return 0;
}
