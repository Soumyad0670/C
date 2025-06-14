#include<stdio.h>
int largest(int n) {
    int c;
    int arr[n], cnt[c];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++) {
        c=0;
        for(int j=0;j<n;j++){      
            if(arr[i]<arr[j]){
                c++;
            }
        cnt[i]=c;
    }
}
    for(int i=0;i<n;i++){
        if(cnt[i]==1){
            return arr[i];
        }
    }
}
int main() {
    int num, larg, count;
    printf("Enter the number of elements present in the array:\n");
    scanf("%d", &num);
    larg = largest(num);
    printf("The second largest number present in the array:%d\n",larg);
    return 0;
}

// By recursion
#include <stdio.h>
int findMax(int arr[], int n) {
    if (n == 1)
        return arr[0];
    int max_in_rest = findMax(arr, n - 1);
    return (arr[n - 1] > max_in_rest) ? arr[n - 1] : max_in_rest;
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int maxElement = findMax(arr, n);
    printf("The maximum element is: %d\n", maxElement);
    return 0;
}
