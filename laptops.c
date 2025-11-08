#include <stdio.h>

int main() {
    int laptops;

    printf("Enter number of laptops in class: ");
    scanf("%d", &laptops);

    if(laptops == 0) {
        printf("No laptops in class\n");
    } else {
        printf("Laptops in class\n");
        printf("Number of laptops: %d\n", laptops);
    }

    return 0;
}