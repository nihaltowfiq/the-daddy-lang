/*
  Eligibility to Vote
  A person is eligible to vote if their age is 18 or above. Write a C program to check if the user is eligible.
*/

#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible to vote\n");
    } else {
        printf("You are not eligible to vote\n");
    }

    return 0;
}