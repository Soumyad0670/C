#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello ";
    char str2[] = "World!";
    char *ptr1 = str1;
    char *ptr2 = str2;

    // Move ptr1 to the end of str1
    while (*ptr1) {
        ptr1++;
    }

    // Copy str2 to the end of str1
    while (*ptr2) {
        *ptr1 = *ptr2;
        ptr1++;
        ptr2++;
    }
    *ptr1 = '\0';  // Add null terminator

    printf("Concatenated string: %s\n", str1);
    return 0;
}