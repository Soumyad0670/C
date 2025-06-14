#include<stdio.h>
int main(){
    int n,i=0;
    printf("Enter the number of elements: ");
    while(n!=0){
        scanf("%d",&n);
        i++;
        if(n==0){
            break;
        }
    }
    printf("The number of elements entered is %d",i);
    return 0;
}