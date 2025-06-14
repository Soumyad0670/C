#include<stdio.h>
int digits(int num){
    int res=0;
    if(num == 0){
        return 0;
    }    
    else{
        return num % 10 + digits(num/10);
    }
}
int main(){
    int n,result;
    printf("Enter a number:\n");
    scanf("%d",&n);
    result=digits(n);
    printf("The sum of digits:%d\n",result);
    return 0;
}