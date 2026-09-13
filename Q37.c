// Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int a, b, x, y, gcd, lcm;

    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (y != 0) {
        int remainder = x % y;
        x = y;
        y = remainder;
    }

    gcd = x;
    lcm = (a / gcd) * b;

    printf("LCM = %d\n", lcm);

    return 0;
}
