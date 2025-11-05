#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    printf("Enter a positive integer 'n': ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i; // same as sum = sum + i;
        i++;      // same as i = i + 1;
    }

    printf("Sum of first %d natural numbers is: %d\n", n, sum);
    return 0;
}
