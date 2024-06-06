#include <math.h>
#include <stdio.h>
int main() {
  float num1, num2;
  char operator;

  printf("Enter 2 numbers:\n");
  if (scanf("%f %f", &num1, &num2) != 2) {
    printf("Invalid Input . Please enter valid number");
    return 1;
  }
  printf("Enter '+' for addition:\n");
  printf("Enter '-' for substraction:\n");
  printf("Enter '*' for multiplication:\n");
  printf("Enter '/' for division:\n");
  printf("Enter '^' for exponent:\n");
  scanf(" %c", &operator);
  switch (operator) {
  case '+':
    printf("The answer of %2.f +  %2.f is %2.f", num1, num2, num1 + num2);
    break;
  case '-':
    printf("The answer of %2.f -  %2.f is %2.f", num1, num2, num1 - num2);
    break;
  case '*':
    printf("The answer of %2.f * %2.f is %2.f", num1, num2, num1 * num2);
    break;
  case '/':
    if (num2 == 0) {
      printf("denominator cannot be zero");
      break;
    }
    printf("The answer of %2.f / %2.f is %2.f", num1, num2, num1 / num2);
    break;
  case '^':
    printf("The answer of %2.f ^ %2.f is %2.f", num1, num2, pow(num1, num2));
    break;
  default:
    printf("Invalid Input!! Please try again");
  }
  return 0;
}
