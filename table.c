#include<stdio.h>
int main(){
    int n ;
    int s;
    printf("enter a no  ");
    scanf("%d", &n);
    for(int i = 1; i<=10; i=i+1){
        s=n*i;
        printf("%d \n", s);
}
return 0;
}