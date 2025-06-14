#include<stdio.h>
#include<string.h>
int main(){
    int i,isPalindrome=1,l;
    char str[100];
    printf("Enter a word:\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    l=strlen(str);
    for(i=0;i<l/2;i++){
        if(str[i]==str[l-i-1]){
            isPalindrome=0;
            break;
        }
    }
    if(isPalindrome==0){
        printf("The word is palindrome");
    }
    else{
        printf("The word is not palindrome");
    }
    return 0;
}
