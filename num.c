#include <stdio.h>
#include <math.h>

int main() {
    int year;
    printf(“Enter an year:”);
    scanf(“%d”,&year);
    if((year%100 ==0 && year%400 ==0) || (year%100 !=0 && year%4 ==0)){
    printf(“\nLeap Year”);
    }
    else{
    printf(“\nNot a Leap Year.”);
    }
}