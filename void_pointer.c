#include <stdio.h>
int main() {
    int a = 5;
    double b = 3.1415;
    void *vp;
    vp = &a;
    printf("\n a = %d",*((int*)vp));
    vp=&b;
    printf("\n b = %d",*((double *)vp));
    return 0;
}

// A void pointer is a special type of pointer that can point to any data type, regardless of its type (int, float, char, etc.).
// We need to cast the void pointer to the appropriate type before dereferencing it.
