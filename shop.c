#include <stdio.h>

int main() {
    int shop;

    printf("Enter 1 if shop is OPEN\n");
    printf("Enter 0 if shop is CLOSED\n");
    scanf("%d", &shop);

    if(shop == 1) {
        printf("Shop is open.\n");
        printf("You can eat Samosa, Vada Pav, Sandwich, or Tea.\n");
    }
    else {
        printf("Shop is closed.\n");
        printf("You can eat food from home.\n");
    }

    return 0;
}