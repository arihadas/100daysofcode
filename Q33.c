// Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    int n, original, temp, digits = 0, digit;
    int sum = 0;

    scanf("%d", &n);

    if (n < 0) {
        printf("Not an Armstrong number\n");
        return 0;
    }

    original = n;
    temp = n;

    if (temp == 0)
        digits = 1;
    else
        while (temp != 0) {
            digits++;
            temp /= 10;
        }

    temp = n;

    while (temp != 0) {
        digit = temp % 10;
        sum += (int)pow(digit, digits);
        temp /= 10;
    }

    if (sum == original)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}
