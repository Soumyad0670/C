#include <stdio.h>
int main() {
    int n, i, position;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position where you want to delete: ");
    scanf("%d", &position);
    printf("Resultant array:\n");
    for (i = 0; i < position-1; i++)
        printf("%d\n", arr[i]);
    for (i = position; i < n; i++)
        printf("%d\n", arr[i]);
    return 0;
}


