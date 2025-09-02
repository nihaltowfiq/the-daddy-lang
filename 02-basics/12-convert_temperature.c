/*
  Convert Temperature (Celsius to Fahrenheit & Vice Versa)
  Write a program that converts Celsius to Fahrenheit or Fahrenheit to Celsius based on user input.
  Formula:
    • Fahrenheit = (Celsius * 9/5) + 32
    • Celsius = (Fahrenheit - 32) * 5/9
*/

#include <stdio.h>

int main() {
  char unit;
  float temperature;

  printf("Enter temperature: ");
  scanf(" %f", &temperature);
  printf("Convert to (C/F): ");
  scanf(" %c", &unit);

  if(unit == 'C' || unit == 'c') {
    temperature = (temperature - 32) * 5/9;
    printf("Temperature in Celsius: %.2f\n", temperature);
  } else {
    temperature = (temperature * 9/5) + 32;    
    printf("Temperature in Fahrenheit: %.2f\n", temperature);
  }


  return 0;
}