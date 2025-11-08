#include <stdio.h>

int main() {
    int n, i = 1;
    int t1 = 0, t2 = 1; 
    int nextTerm = t1 + t2;

    printf("Enter the number of terms 'n': ");
    scanf("%d", &n);

    printf("Fibonacci Series (first %d terms):\n", n);
    

    if (n >= 1) printf("%d ", t1);
    if (n >= 2) printf("%d ", t2);


    i = 3; 
    while (i <= n) {
        printf("%d ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
        i++;
    }

    printf("\n");
    return 0;
}