#include <stdio.h>

int add3(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Sum = %d", add3(a, b, c));

    return 0;
}
