#include <stdio.h>
int findHCF(int a, int b) {
    if (b == 0) {
        return a; 
    }
    else {
    return findHCF(b, a % b); 
}
}
int findLCM(int a, int b) {
    return (a * b) / findHCF(a, b); 
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int lcm = findLCM(num1, num2);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
    return 0;
}
