#include<stdio.h>
int main(){
    int n,i,j,sp1,sp2,k;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        for(sp1=n;sp1>i;sp1--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
        printf("%d",j);
        }
        if(i>=2){
            for(k=i-1;k>=1;k--){
                printf("%d",k);
            }
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(sp2=i-1;sp2<n;sp2++){
            printf(" ");
        }
        for(j=1;j<i;j++){
            printf("%d",j);
        }
        if(i<=n-1){
            for(k=i-2;k>=1;k--){
                printf("%d",k);
            }
        }
        printf("\n");
    }
}
