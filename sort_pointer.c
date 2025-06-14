#include <stdio.h>
void sortArray(int *arr, int size) {
    int i, j, temp;
    for(i = 0; i < size - 1; i++) {
        for(j = 0; j < size - i - 1; j++) {
            if(*(arr + j) > *(arr + j + 1)) {
                temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}
int main() {
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements: ", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    sortArray(arr, size);
    printf("Sorted array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
