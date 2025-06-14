#include<stdio.h>
int main(){
    int n,temp,count;
    printf("Enter the number of elements in an array");
    scanf("%d",&n);
    int arr[n];
    printf("The number of elements in an array");
    for(int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i < n; i++) {
        count = 1;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                for(int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
        if(count > 1) {
            printf("%d is repeated %d times\n", arr[i], count);
        }
    }
    return 0;
}