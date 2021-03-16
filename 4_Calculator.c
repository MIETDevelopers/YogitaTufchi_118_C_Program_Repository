#include <stdio.h>

int main() {
    char operator;
    double n1, n2;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf",&n1, &n2);
    switch(operator)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
            break; // this statement is correct syntaxt wise
        case '-':
            printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
        case '*':
            printf("%.1lf * %.3lf = %.2lf",n1, n2, n1*n2);
        case '/':
            printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
            break;
        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
    }
    return 0;
}
