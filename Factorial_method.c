#include<stdio.h>
int factorial(int n){
    int result = 1;
    for(int i=1; i<=n; i++){
        result = result * i;
    }
    return result;
}
int main(){
    int number, ret;
    printf("Enter a number");
    scanf("%d",&number);
    ret=factorial(number);
    printf("The factorial of a number: %d\n",ret);
    return 0;
}
// factorial by using method
