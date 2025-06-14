#include<stdio.h>
int main() {
    int n, temp;
    printf("Enter the number of elements in an array:\n ");
    scanf("%d", &n);
    if (n < 2) {
        printf("Array should have at least two elements\n");
        return -1;
    }
    int arr[n];
    printf("Enter the elements of the array:\n ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int second_smallest = arr[0];
    for(int i = 1; i < n; i++) {// checking whether the number is second smallest
        if(arr[i] > second_smallest) {
            second_smallest = arr[i];//getting the second dmallest number in the array
            break;
        }
    }
    if(second_smallest == arr[0]) {
        printf("There is no second largest element\n");
    } else {
        printf("The second largest element is %d\n", second_smallest);
    }
    return 0;
}
