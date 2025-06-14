#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_LENGTH 1000
void findFirstLetters(char *str) {
    int isWord = 0;
    printf("First letters of each word: ");
    for(int i = 0; str[i] != '\0'; i++) {
        if(isalnum(str[i])) {
            if(!isWord) {
                printf("%c ", str[i]);  
                isWord = 1;
            }
        }
        else {
            isWord = 0;
        }
    }
    printf("\n");
}
int main() {
    char sentence[MAX_LENGTH];
    printf("Enter a sentence: ");
    fgets(sentence, MAX_LENGTH, stdin);
    sentence[strcspn(sentence, "\n")] = '\0';
    findFirstLetters(sentence);
    return 0;
}