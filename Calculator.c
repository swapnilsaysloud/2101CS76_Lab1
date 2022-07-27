#include <stdio.h>
int main()

{
    char op;
    double num1, num2;
    printf("Enter an operator (+, -, *, /):\n ");
    scanf("%c", &op);

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
    }
    return 0;
}