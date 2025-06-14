#include <stdio.h>
void copyArray(int source[], int destination[], int size, int index) {
    if (index == size)
        return;
    destination[index] = source[index];
    copyArray(source, destination, size, index + 1);
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int source[n], destination[n];
    printf("Enter %d elements for the source array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &source[i]);
    }
    copyArray(source, destination, n, 0);
    printf("The copied array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", destination[i]);
    }
    printf("\n");
    return 0;
}
