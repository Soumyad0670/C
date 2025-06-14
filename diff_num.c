#include<stdio.h>
int main() {
    int n, count = 0, a = 0, b = 0, d;
    printf("Enter number of elements in the array:\n");
    scanf("%d",&n);
    int arr[n], cnt[n];
    printf("Enter the elements of the array:");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++) {
        count = 0;  
        for(int j=0; j<n; j++) {
            if(arr[i] < arr[j]) {
                count++;
            }
        }
        cnt[i]=count;
    }
    for(int i = 0; i <n; i++){
        if(cnt[i]==1){
            printf("The second largest number is:%d\n", arr[i]);
            a = arr[i];
            break;
        }
    }
    for(int k=0; k<n; k++) {
        count = 0;  
        for(int j=0; j<n; j++) {
            if(arr[k] > arr[j]) {
                count++;
            }
        }
        cnt[k]=count;
    }
    for(int k = 0; k <n; k++){
        if(cnt[k]==1){
            printf("The second smallest number is:%d\n", arr[k]);
            b = arr[k];
            break;
        }
    }
    d=a-b;
    printf("The difference between the Second Largest and the second smallest elements is: %d\n", d);
    return 0;
}