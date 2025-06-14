#include <stdio.h>

int findHCF(int a, int b) {
    if (b == 0) { 
        return a; 
    }
    else {
    return findHCF(b, a % b); 
    }
}
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int hcf = findHCF(num1, num2);
    printf("HCF of %d and %d is: %d\n", num1, num2, hcf);
    return 0;
}
