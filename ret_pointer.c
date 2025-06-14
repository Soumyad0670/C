#include <stdio.h>
int *pointMax(int *x, int *y) {
    if(*x > *y)
        return x;
    else
        return y;
}
int main() {
    int a, b, *p;
    printf("\n Enter the value of a: ");
    scanf("%d", &a);
    printf("\n Enter the value of b: ");
    scanf("%d", &b);
    p = pointMax(&a, &b);
    printf("\n Maximum value is: %d\n", *p);
    return 0;
}
