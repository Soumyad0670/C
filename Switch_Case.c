#include<stdio.h>

int main(){

    int week;
    printf("plesase enter 1-7 days \n");
    scanf("%d",&week);

switch(week) {
        case 1 : printf("monday");
                break;
        case 2 : printf("tuesday");
                 break; 
        case 3 : printf("wednessday");
                  break;
        case 4 : printf("thrusday ");
                   break;
        case 5 : printf("friday ");
                   break;
        case 6 : printf("saturday");
                 break;
        case 7 : printf("sunday ");
                 break;
        default: printf("not a valid day ");
                break;
        }
        return 0;  
}