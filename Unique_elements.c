#include<stdio.h>
int main(){
    int n, i, j, a, count;
    printf("Enter the number of elements in an array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i!=j && arr[i] == arr[j]) {
                a=0;
                count++;
            }
        }
    }    
    if(a){
        printf("%d",arr[i]);
    }
    printf("Total number of duplicate elements: %d\n", count);
    return 0;
}
