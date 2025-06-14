#include<stdio.h>

int main(){
    int n;
    printf("pls enter the no   ");
    scanf("%d", &n);
    int i;
int s=0;
    for(i=1; i<=n; i++){
        s=s+i;
    }
    printf("%d", s);
    
    return 0;   
}