// Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main() {
    long long n, result = 0, place = 1;
    int digit;

    scanf("%lld", &n);

    if (n == 0) {
        printf("1\n");
        return 0;
    }

    while (n != 0) {
        digit = n % 10;

        if (digit == 0)
            result += 1 * place;
        else
            result += 0 * place;

        place *= 10;
        n /= 10;
    }

    printf("%lld\n", result);

    return 0;
}
