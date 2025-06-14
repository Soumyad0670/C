#include<stdio.h>
int main(){
    int i,n;
    float fact=1,r;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact *= i;
    }
    r=1/fact;
    printf("%2f",r);
}