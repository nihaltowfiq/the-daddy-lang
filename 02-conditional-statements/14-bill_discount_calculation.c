/*
  A store offers the following discounts based on the total purchase amount:
  Purchase Amount Discount:
    Above Tk. 5000 10%
    Tk. 3000-5000 5%
    Below Tk. 3000 No Discount
  Write a program that calculates the discounted amount.
*/

#include <stdio.h>

int main() {
  float bill;

  printf("Enter total bill: ");
  scanf("%f", &bill);

  if(bill <= 3000) {
    printf("No discount. Pay the bill amount: %.2f\n", bill);
  } else if(bill > 3000 && bill <= 5000) {
    printf("You get 5%% discount. Pay the bill amount: %.2f\n", bill - (bill * 0.05));
  } else {
    printf("You get 10%% discount. Pay the bill amount: %.2f\n", bill - (bill * 0.10));
  }
  
  return 0;
}