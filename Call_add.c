#include <stdio.h>
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int x = 5, y = 10;
    printf("Before Swapping: %d %d\n", x, y);
    swap(&x, &y);
    printf("After Swapping: %d %d\n", x, y);
    return 0;
}   

// Call by reference is a programming technique where a function receives a reference to a variable rather than a copy of its value.
// This allows the function to modify the original variable directly. 
// In C, this is typically done using pointers. 
// The example above demonstrates how to swap two integers using call by reference. 
// The `swap` function takes pointers to the integers and swaps their values directly in memory.
// C does not support call by reference directly, but we can achieve it using pointers, by call by address.