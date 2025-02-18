/*
  Check Triangle Validity
  A triangle is valid if the sum of any two sides is greater than the third side. Write a program to
  check if the given three sides form a valid triangle.
*/

#include <stdio.h>

int main() {
  int side1, side2, side3;

  printf("Enter three sides of a triangle: ");
  scanf("%d %d %d", &side1, &side2, &side3);

  if((side1 + side2) > side3 && (side2 + side3) > side1 && (side1 + side3) > side2) {
    printf("The given sides form a valid triangle.\n");
  } else {
    printf("The given sides form an invalid triangle\n");
  }
  
  return 0;
}