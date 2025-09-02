/*
  Find the Largest of Two Numbers
  Write a C program that takes two numbers as input and prints the larger number. 
  If both numbers are the same, print "Both numbers are equal".
*/

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("The larger number is: %d\n", num1);
    } else if (num2 > num1) {
        printf("The larger number is: %d\n", num2);
    } else {
        printf("Both numbers are equal\n");
    }

    return 0;
}