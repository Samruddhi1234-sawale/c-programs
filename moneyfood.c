#include <stdio.h>

int main() {
    int money;

    printf("Enter how much money you have: ");
    scanf("%d", &money);

    if(money >= 100){
        printf("You can eat Pizza \n");
    }
    else if(money >= 50){
        printf("You can eat Burger \n");
    }
    else if(money >= 20){
        printf("You can eat Vada Pav \n");
    }
    else if(money >= 10){
        printf("You can eat Biscuits \n");
    }
    else{
        printf("You cannot buy anything \n");
    }

    return 0;
}