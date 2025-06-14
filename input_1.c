#include<stdio.h>

int main(){
    int n,s ;
        printf("enter a no  ");
        scanf("%d", &n);
            for(int i = 1; i<=10; i++){
                s=n*i;
                printf("%d \n", s);
        }
            return 0;
}