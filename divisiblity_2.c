#include<stdio.h>
int main(){
    int s;
    printf("enter a no ");
    scanf("%d", &s);
    for(int i=0; i<=s;i++){
        if(i % 2 != 0){
            printf("%d \n", i);
        }
    }
    return 0;
}