#include <stdio.h>
int main() {
    int n, isIdentity = 1;
    int mat[100][100];
    printf("Enter the size of square matrix: ");
    scanf("%d", &n);
    printf("\nEnter elements for the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == j && mat[i][j] != 1) || (i != j && mat[i][j] != 0)) {
                isIdentity = 0;
                break;
            }
        }
        if (!isIdentity) {
            break;
        }
    }
    if (isIdentity) {
        printf("\nThe matrix is an identity matrix.\n");
    } else {
        printf("\nThe matrix is not an identity matrix.\n");
    }
    return 0;
}
