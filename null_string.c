#include <stdio.h>

// Recursive function to reverse the string
void reverseString(char *str, int start, int end) {
    // Base case: stop when start meets or crosses end
    if (start >= end)
        return;

    // Swap characters at start and end
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursive call with the next positions
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];

    // Input the string
    printf("Enter a string: ");
    scanf("%s", str);

    // Find the length of the string
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    // Call the recursive function to reverse the string
    reverseString(str, 0, length - 1);

    // Output the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
