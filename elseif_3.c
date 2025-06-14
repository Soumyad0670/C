#include<stdio.h>

int main(){
    int age;
    printf("entrer age");
    scanf("%d", &age);
    if(age>18){
    printf("he is an adult");
    }
else{
    printf("he is a teenager");
}
return 0;
}