#include<stdio.h>
#include<string.h>
int main(){
    int i,j,c=0;
    char str[100];
    printf("Enter your name:\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    for(i=0;str[i]!='\0';i++){
        if (str[i] == ' '){
            c = i;
            break;
        }
    }
    if(c==0){
        printf("Space not found");
        return 0;
    }
    for(j=c+1;str[j] !='\0';j++){
            printf("%c",str[j]);
    }
    printf(" ");
    for(i=0;i<c;i++){
            printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}
