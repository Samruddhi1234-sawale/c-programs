#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18) {
        printf("You can play Cricket, Football, and Online Competitive Games.\n");
    }
    else if(age >= 13) {
        printf("You can play Badminton, Volleyball, and Mobile Games.\n");
    }
    else {
        printf("You can play Hide and Seek, Running games, and Carrom.\n");
    }
    
    return 0;
}