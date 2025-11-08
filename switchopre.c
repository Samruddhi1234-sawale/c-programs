#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;

    printf("Please enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Please enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
         case '/':
            result = num1 / num2;
            printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            break;
        default:
            printf("Error Operator is not correct\n");
    }

    return 0;
}
