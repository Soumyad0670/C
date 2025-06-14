#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    char *ptr;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string with spaces
    str[strcspn(str, "\n")] = 0; // Remove newline character if present
    ptr = str + strlen(str) - 1; // Point to the last character of the string
    printf("String in reverse: "); 
    while(ptr >= str) { // Loop until the start of the string
        printf("%c", *ptr);
        ptr--;
    }
    printf("\n");
    return 0;
}