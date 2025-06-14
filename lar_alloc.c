#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr, n, i;
    int sum = 0, max;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for(i = 0; i < n; i++) {
        if(arr[i] > max) {
                max = arr[i];
        }
    }
    printf("The largest element present in the array: %d\n", max);
    free(arr);
    return 0;
}