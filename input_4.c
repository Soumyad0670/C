#include<stdio.h>
int main(){
    int s;
printf("enter the no till which you want to print : ");
scanf("%d", &s);
for(int i=0; i<=s ; i++){
   if(i == 3){
   continue;
   }
   printf("%d \n", i);
}
return 0;
}
