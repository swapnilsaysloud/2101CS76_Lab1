#include <stdio.h>
int main()
/* C program that works as a calculator */
{
    char op;
    /* Numbers on which all the operations will take place*/
    double num1, num2;
    printf("Enter an operator (+, -, *, /):\n ");
    scanf("%c", &op);
    /* Remember the order of entry of numbers for operations like division and subtraction */
    printf("Enter two numbers for operation:\n ");
    scanf("%lf %lf", &num1, &num2);
    switch (op)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", num1, num2, num1 * num2);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", num1, num2, num1 / num2);
        break;
        /* If the input does not match with a valid operator */
    default:
        printf("Error! please use a valid operator \n");
    }
    return 0;
}