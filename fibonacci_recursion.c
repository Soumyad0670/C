#include<stdio.h>
int fibonacci(int n) {
    if(n == 0 || n == 1) {
        return n;
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
int main() {
    int n;
    printf("Enter a number for printing the fibonacci series:\n");
    scanf("%d", &n);
    printf("Fibonacci series of %d terms is:\n", n);
    for(int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
// 0, 1, 1, 2, 3, 5, 8, 13, 21

