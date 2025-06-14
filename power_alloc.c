#include<stdio.h>
#include <stdlib.h>
#include <math.h>
// This program dynamically allocates memory for an array of integers using calloc,
int main() {
    int *arr, n, sq;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    arr = (int *)calloc(n , sizeof(int)); // Allocate memory for n integers by calloc
    if (arr == NULL) { // Check if memory allocation was successful
        printf("Memory allocation failed\n");
        return 1;
    }
    for(int i=0;i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]); // Read each element into the allocated memory
    }
    for(int i=0; i<=n; i++) {
        sq=pow(arr[i],2); // Calculate the square of each element
        printf("The square of %d is %d", arr[i], sq);
    }
    free(arr);
    return 0;
}