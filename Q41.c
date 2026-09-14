// Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int n, first, last, divisor = 1, middle, result;

    scanf("%d", &n);

    if (n < 10) {
        printf("%d\n", n);
        return 0;
    }

    last = n % 10;
    first = n;

    while (first >= 10)
        first /= 10;

    while (divisor <= n / 10)
        divisor *= 10;

    middle = (n % divisor) / 10;
    result = last * divisor + middle * 10 + first;

    printf("%d\n", result);

    return 0;
}
