#include <stdio.h>
int main() {
    int i, n, n1, k = 0;
    for (i = 1; i < 100; i++) {
        n = i % 10; 
        n1 = i / 10; 
        if (n == 3 || n1 == 3) {
            k++;
        }
    }
    printf("Count of numbers containing the digit 3: %d\n", k);
    return 0;
}

