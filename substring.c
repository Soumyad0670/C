#include <stdio.h>
#include <string.h>
int main() {
    char str[100], substr[100];
    int start, length, i;
    printf("Enter the main string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    printf("Enter the starting position: ");
    scanf("%d", &start);
    printf("Enter the length of the substring: ");
    scanf("%d", &length);
    if (start < 0 || start >= strlen(str) || length <= 0 || start + length > strlen(str)) {
        printf("Invalid position or length.\n");
    } else {
        for (i = 0; i < length; i++) {
            substr[i] = str[start + i];
        }
        substr[i] = '\0';
        printf("Extracted substring: %s\n", substr);
    }
    return 0;
}
