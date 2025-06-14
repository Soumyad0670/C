#include<stdio.h>
int main(){
    int  sec,h,m,s;
    printf("enter the value of second\n");
    scanf("%d",&sec);
    h=sec/3600;
    m=(sec%3600)/60;
    s=sec%60;
    printf("the value of %d seconds is %d hours %d minutes and %d seconds\n",sec,h,m,s);
    return 0;
}