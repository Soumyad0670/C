#include<stdio.h>
int main(){
    int n, count = 0, c;
    printf("Enter the number of elements in an array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
    }    
    printf("Total number of duplicate elements: %d\n", count);
    return 0;
}

