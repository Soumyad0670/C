#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i == 1 || i == n) {
            // Print the first and last row
            for (j = 1; j <= n; j++) {
                printf("* ");
            }
        } else {
            // Print the middle rows
            printf("* ");
            for (j = 1; j <= n - 2; j++) {
                printf("  ");
            }
            printf("*");
        }
        printf("\n");
    }

    return 0;
}