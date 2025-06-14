#include<stdio.h>
int fibonacci(int n){
    int n1=0, n2=1, res;
    for(int i=1; i<=n; i++){
        res=n1+n2;
        printf("%d\n", res);
        n1=n2;
        n2=res;
    }
}
int main(){
    int num, ret;
    printf("Enter a number:\n");
    scanf("%d",&num);
    printf("The fibonacci series:\n");
    printf("%d\n",0);
    printf("%d\n",1);    
    fibonacci(num);
    return 0;
}
    

