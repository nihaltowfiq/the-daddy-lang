/* PROBLEM: A commercial bank has introduced an incentive policy of giving bonus to all its deposit holders.
The policy is as follows: A bonus of 5 per cent of the balance held on 31st December is given to every one,
inspect of their balance, and 10 per cent is given to male account holders if their balance is more
than Tk. 80,000. (Using Conditional Statements) */ 

#include <stdio.h>

int main() {
  char gender;
  double balance;

  printf("Enter your balance: ");
  scanf("%lf", &balance);

  printf("Enter your gender (M/F): ");
  scanf(" %c", &gender);

  if (balance > 80000 && gender == 'M') {
    balance = balance + (balance * 0.10);
  } else {
    balance = balance + (balance * 0.05);
  }

  printf("Your balance after bonus: %.2lf\n", balance);
  
  return 0;  
}

