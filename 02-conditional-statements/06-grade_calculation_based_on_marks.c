/*
  Grade Calculation Based on Marks
  Write a C program that takes a student’s marks (out of 100) and prints their grade based on the
  following criteria:
  Marks (%) Grade
    90-100 A+
    80-89 A
    70-79 B+
    60-69 B
    50-59 C
    Below 50 Fail
*/

#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100) {
        printf("Grade: A+\n");
    } else if (marks >= 80 && marks <= 89) {
        printf("Grade: A\n");
    } else if (marks >= 70 && marks <= 79) {
        printf("Grade: B+\n");
    } else if (marks >= 60 && marks <= 69) {
        printf("Grade: B\n");
    } else if (marks >= 50 && marks <= 59) {
        printf("Grade: C\n");
    } else if (marks < 50 && marks >= 0) {
        printf("Grade: Fail\n");
    } else {
        printf("Invalid marks\n");
    }

    return 0;
}