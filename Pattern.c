#include <stdio.h>
int main() {
    int i, j, k, spaces;
    for (i = 4; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (spaces = 1; spaces <= 8 - 2 * i; spaces++) {
            printf(" ");
        }
        for (k = i; k >= 1; k--) {
            printf("%d", k);
        }
        printf("\n");
    }
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (spaces = 1; spaces <= 8 - 2 * i; spaces++) {
            printf(" ");
        }
        for (k = i; k >= 1; k--) {
            printf("%d", k);
        }
        printf("\n");
    }

    return 0;
}