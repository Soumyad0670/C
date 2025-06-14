#include<stdio.h>
int main(){
    int i,n,n1=1,n2=3,m,s;
    printf("The no of terms to be printed");
    scanf("%d",&n);
    printf("%d\n",n1);
    printf("%d\n",n2);
    for(i=1;i<=n;i++){
        s=n1+n2;
        printf("%d\n",s);
        n1=n2;
        n2=s;
    }
}