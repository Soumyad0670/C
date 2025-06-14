#include<stdio.h>
int main(){
    int n,s=0,dig,p,num;
    printf("Enter a number");
    scanf("%d",&n);
    num=n;
        while(n!=0){
            dig=n%10;
            p=dig*dig*dig;
            s=s+p;
            n=n/10;
        }   
    if(num==s){
    printf("Armstrong number");
    }
    else{
    printf("Not an armstrong number");
    }
    return 0;
}

