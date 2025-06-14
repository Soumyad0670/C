#include <stdio.h>
int main() {
    int arr[100], size, key;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d\n",i);  
        }
        else {
            printf("Element not found\n");
        }
    }
    return 0;
}
