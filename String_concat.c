#include<stdio.h>
#include<string.h>
int main() {
    char s1[100], s2[100];
    printf("Enter two strings: ");
    fgets(s1, sizeof(s1), stdin); 
    fgets(s2, sizeof(s2), stdin); 
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';
    printf("The concatenated string is: %s\n", strcat(s1,s2));
    return 0;
}