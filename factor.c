#include <stdio.h>

int main() {
    int num;
    long long factorial = 1; 
    
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        int i = num; 
        while (i > 1) {
            factorial *= i;
            i--;
    printf("Factorial of %d = %lld\n", num, factorial);
    }
    return 0;
}
}
    
