// C program to swap first and last digits of a number
#include <stdio.h>
#include <math.h>
int main() {
    long n, q, p, num = 0, num2, j = 0, d1, d2, num3, r, s;
    printf("enter the number: ");
    scanf("%d", &n);
    p = n;
    d1 = n % 10;
    while (p > 0) {
        q = p % 10;
        num = (num * 10) + q;
        p = p / 10;
        j++;
    }
    d2 = num % 10;
    s = d2 * (pow(10, j - 1));
    num2 = (n - s - d1) + d2;
    r = d1 * (pow(10, j - 1));
    num3 = r + num2;
    printf("%d\n", num3);
    return 0;
}