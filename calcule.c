#include <stdio.h>
#include <stdlib.h>

int main()
{
  char operator;
  double num1;
  double num2;
  double num3;
  double result;

  printf(" \nEnter an operator (+ - * /): ");
  scanf("%c", &operator);

  if (operator== 'q')
  {
    exit(0);
  }
  else
  {

    printf("enter number 1: ");
    scanf("%lf", &num1);

    printf("enter number 2: ");
    scanf("%lf", &num2);

    printf("enter number 3: ");
    scanf("%lf", &num3);

    switch (operator)
    {
    case '+':
      result = num1 + num2 + num3;
      printf("\nresult: %lf", result);
      break;
    case '-':
      result = num1 - num2 - num3;
      printf("\nresult: %lf", result);
      break;
    case '*':
      result = num1 * num2 * num3;
      printf("\nresult: %lf", result);
      break;
    case '/':
      if (num2 != 0 && num3 != 0)
      {
        result = num1 / num2 / num3;
        printf("\nresult: %lf", result);
      }
      else
        printf("impossiple mission");
      break;

    default:
      printf("%c is not valid", operator);
    }
  }
  return 0;
}
