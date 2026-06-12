#include <stdio.h>

int isEven(int n) {
    return n % 2 == 0;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isEven(n))
        printf("Even Number");
    else
        printf("Odd Number");

    return 0;
}
