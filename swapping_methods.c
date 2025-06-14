#include <stdio.h>
void swap(int n1, int n2) {
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
    printf("After swapping: a = %d, b = %d\n", n1, n2);
}
int main() {
    int a, b;
    printf("Enter two numbers:\n");
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(a, b);
    return 0;
}
