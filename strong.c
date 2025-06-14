#include <stdio.h>
int main() {
    int n, num, a, s = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    a = n;
    while (n != 0) {
        num = n % 10; 
        int fact = 1;
        for (int i = 1; i <= num; i++){
        fact *= i;
        }
        s += fact; 
        n /= 10; 
    }
    if (s == a) {
        printf("It is a strong number\n");
    } else {
        printf("It is not a strong number\n");
    }
    return 0;
}