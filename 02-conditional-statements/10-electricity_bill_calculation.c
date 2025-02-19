/*
  Electricity Bill Calculation
  Write a program that calculates the electricity bill based on the following tariff:
  Units Consumed Rate per Unit:
    0-100 Tk. 5
    101-300 Tk. 7
    Above 300 Tk. 10
*/

#include <stdio.h>

int main() {
  int units;
  float bill;

  printf("Enter the number of units consumed: ");
  scanf("%d", &units);

  if(units < 0) {
    printf("Negative value is not allowed");
    return 0;
  }

  if(units >= 0 && units <= 100) {
    bill = units * 5;
  } else if(units > 100 && units <= 300) {
    bill = 100 * 5 + (units - 100) * 7;
  } else {
    bill = 100 * 5 + 200 * 7 + (units - 300) * 10;
  }

  printf("Electricity bill: Tk. %.2f ", bill);

  return 0;
}