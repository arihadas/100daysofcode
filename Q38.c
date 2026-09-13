// Write a program to find the sum of digits of a number.

#include <stdio.h>

int main() {
    int n, sum = 0, digit;

    scanf("%d", &n);

    if (n < 0)
        n = -n;

    while (n != 0) {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
