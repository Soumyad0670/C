#include<stdio.h>
int main(){
    int n;
    double n1=0,n2=1,n3;
    printf("Enter the number of terms to be printed:");
    scanf("%d",&n);
    printf("The series is:");
    for (int i = 1; i <= n; ++i){
        printf("%.0lf\n",n1);
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }   
    printf("\n");
    return 0;
}

