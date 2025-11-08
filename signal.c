#include <stdio.h>

int main() {
    int signal;

    printf("Enter signal color code:\n");
    printf("1 - Red\n2 - Yellow\n3 - Green\n");
    printf("Enter your choice: ");
    scanf("%d", &signal);

    switch(signal) {
        case 1:
            printf("STOP! The signal is RED.");
            break;
        case 2:
            printf("WAIT! The signal is YELLOW.");
            break;
        case 3:
            printf("GO! The signal is GREEN.");
            break;
        default:
            printf("Invalid signal color code.");
    }

    return 0;
}