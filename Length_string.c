#include <stdio.h>
#include <string.h>
int main() {
    char input_string[100];
    printf("Enter a string: ");
    gets(input_string);  
    int length = strlen(input_string);
    printf("The length of the string is: %d\n", length);
    return 0;
}