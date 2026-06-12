#include <stdio.h>

int add2(int a, int b) {
    return a + b;
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d", add2(a, b));

    return 0;
}
