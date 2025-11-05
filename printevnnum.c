#include <stdio.h>

int main() {
    int n, i = 2; // Start from 2, the first even number

    printf("Enter the upper limit 'n': ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are: \n", n);
    while (i <= n) {
        printf("%d ", i);
        i += 2; // Jump to the next even number
    }
    printf("\n");
    return 0;
}
