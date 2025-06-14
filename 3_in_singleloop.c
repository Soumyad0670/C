#include<stdio.h>
int main(){
    int i,n,n1=0,n2=0,n3=1,s=2;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d\n",n1);
    printf("%d\n",n2);
    printf("%d\n",n3);
    for(i=3;i<=n;i++){
        s=n1+n2+n3;
        n1=n2;
        n2=n3;
        n3=s;
        printf("%d",s);
        printf("\n");
    }
}