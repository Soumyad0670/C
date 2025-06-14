#include<stdio.h>
int main(){
    int i,n,s=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0)
        s=s+i;
    }
    if(s==n){
        printf("It is a perfect number");
    }
        else{
        printf("It is not perfect number");
    }
}
