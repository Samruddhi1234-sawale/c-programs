#include <stdio.h>

int main() {
    int num, originalNum, digit, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0) {
        digit = num % 10;

        sum += (digit * digit * digit); 
        num /= 10;
    }

    if (originalNum == sum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }
    return 0;
}