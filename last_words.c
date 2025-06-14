#include<stdio.h>
#include<string.h>
int main(){
    int i,l;
    char str[100],a;
    printf("Enter a word:\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    l=strlen(str);
    for(i=0;i<l;i++){
    if ((str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))) {
        printf("%c ", str[i]);
    }
    }
    return 0;
}
