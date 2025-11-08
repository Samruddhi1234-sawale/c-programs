#include <stdio.h>
int main() {
    float r;
    scanf("%f", &r);
    printf("Volume = %.2f", (4.0 / 3.0) * 3.14 * r * r * r);
    return 0;
}