#include <stdio.h>
int main() {
    float a, area;
    printf("Enter side: ");
    scanf("%f", &a);
    area = 6 * a * a;
    printf("Surface Area of Cube = %.2f", area);
    return 0;
}