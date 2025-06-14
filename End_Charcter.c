#include <stdio.h>
#include <string.h>
int main() {
    char sentence[1000];
    char *word;
    
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    // Remove trailing newline from fgets
    sentence[strcspn(sentence, "\n")] = 0;
    
    // Get first word using strtok
    word = strtok(sentence, " ");
    
    printf("Last characters of each word: ");
    
    // Continue getting remaining words
    while (word != NULL) {
        // Print last character of current word
        printf("%c ", word[strlen(word) - 1]);
        word = strtok(NULL, " ");
    }
    printf("\n");
    
    return 0;
}
