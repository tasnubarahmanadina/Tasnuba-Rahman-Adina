#include <stdio.h>

float divide(float a, float b) {
    return a / b;
}

int main() {
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Division = %.2f", divide(a, b));

    return 0;
}
