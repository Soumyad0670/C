#include<stdio.h>
int main(){
    int i,n,j,s=0;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
            s=s+j;
        }
    }
    printf("%d",s);
}