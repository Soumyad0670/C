#include <stdio.h>

int main() {
    int matrix[50][50];
    int rows, cols;
    int sum = 0;
    
    // Input matrix dimensions
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    // Input matrix elements
    printf("Enter matrix elements:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Calculate sum of upper triangle elements
    for(int i = 0; i < rows; i++) {
        for(int j = i; j < cols; j++) {
            sum += matrix[i][j];
        }
    }
    
    // Print the sum
    printf("Sum of upper triangle elements: %d\n", sum);
    
    return 0;
}