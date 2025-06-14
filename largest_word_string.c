#include <stdio.h>
#include <string.h>
int main() {
    char sentence[200], largestWord[100], tempWord[100];
    int i = 0, j = 0, maxLength = 0, tempLength = 0;
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    while (sentence[i] != '\0') {
        if (sentence[i] != ' ' && sentence[i] != '\n') {
            tempWord[j] = sentence[i];  
            tempLength++;
            j++;
        } else {
            tempWord[j] = '\0';  
            if (tempLength > maxLength) {
                maxLength = tempLength;  
                strcpy(largestWord, tempWord);   
            }
            j = 0;
            tempLength = 0;
        }
        i++;
    }
    tempWord[j] = '\0';
    if (tempLength > maxLength) {
        strcpy(largestWord, tempWord);
    }
    printf("The first largest word is: %s\n", largestWord);
    return 0;
}
