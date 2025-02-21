/*
Body Mass Index (BMI) is calculated using the formula:
Metric BMI= weight (kg) / height (m)2
Write a program that calculates BMI and categorizes it as:
  BMI Value     Category
  < 18.5        Underweight
  18.5 - 24.9   Normal weight
  25 - 29.9     Overweight
  30+           Obese
*/


#include <stdio.h>

int main() {
  float height, weight;

  printf("Enter your weight (kg): ");
  scanf("%f", &weight);

  printf("Enter your height (m): ");
  scanf("%f", &height);

  float bmi = weight / (height * height);

  // printf("Your BMI is: %.2f\n", bmi);

  if(bmi < 18.5) {
    printf("Underweight\n");
  } else if(bmi >= 18.5 && bmi <= 24.9) {
    printf("Normal weight\n");
  } else if(bmi >= 25 && bmi <= 29.9) {
    printf("Overweight\n");
  } else {
    printf("Obese\n");
  }
  
  return 0;
}