#include <stdio.h>
int main() {
    int n, i, value, position;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position where you want to insert: ");
    scanf("%d", &position);
    printf("Enter the value to insert: ");
    scanf("%d", &value);
    for (i=n-1;i>=position-1;i--){
        arr[i + 1] = arr[i];
    }
    arr[position - 1] = value;
    printf("Resultant array:\n");
    for (i=0;i<=n;i++)
        printf("%d ", arr[i]);
    return 0;
}

