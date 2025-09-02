/*
  Simple Calculator (Using Switch Case)
  Write a simple calculator that performs addition, subtraction, multiplication, or division based on
  the user’s choice. (+, -, *, /)
*/

#include <stdio.h>

int main() {
  int num1, num2;
  char operation;
  float result;

  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);
  printf("Enter an operation (+, -, *, /): ");
  scanf(" %c", &operation);

  switch (operation) {
    case '+':
      result = num1 + num2;
      printf("Result: %.2f", result);
      break;
    case '-':
      result = num1 - num2;
      printf("Result: %.2f", result);
      break;
    case '*':
      result = num1 * num2;
      printf("Result: %.2f", result);
      break;
    case '/':
      if(num2 == 0) {
        printf("Cannot divide by zero");
        break;
      }
      result = num1 / num2;
      printf("Result: %.2f", result);
      break;
    default:
      printf("Invalid operation");
  }
  
  return 0;
}