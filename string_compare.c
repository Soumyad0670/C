#include<stdio.h>
#include<string.h>
int main(){
    int i,j,c=0;
    char st1[100], st2[100];
    printf("Enter 2 strings:\n");
    fgets(st1,sizeof(st1),stdin);
    fgets(st2,sizeof(st2),stdin);
    st1[strcspn(st1, "\n")] = '\0';
    st2[strcspn(st2, "\n")] = '\0';
    if(strcmp(st1,st2)==0){
        printf("Strings are equal\n");
    }else{
        printf("Strings are not equal\n");
    }
    return 0;
}