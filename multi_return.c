#include <stdio.h>

// Function to return two values using pointers
void calculate(int a, int b, int *sum, int *product) {
    *sum = a + b;
    *product = a * b;
}

int main() {
    int a = 5, b = 10;
    int sum, product;

    calculate(a, b, &sum, &product);

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    return 0;
}

// #include <stdio.h>

// // Define a struct to hold multiple values
// typedef struct {
//     int sum;
//     int product;
// } Result;

// // Function to return a struct
// Result calculate(int a, int b) {
//     Result res;
//     res.sum = a + b;
//     res.product = a * b;
//     return res;
// }

// int main() {
//     int a = 5, b = 10;

//     Result res = calculate(a, b);

//     printf("Sum: %d\n", res.sum);
//     printf("Product: %d\n", res.product);

//     return 0;
// }


// #include <stdio.h>

// // Function to return multiple values using an array
// void calculate(int a, int b, int result[]) {
//     result[0] = a + b;
//     result[1] = a * b;
// }

// int main() {
//     int a = 5, b = 10;
//     int result[2];

//     calculate(a, b, result);

//     printf("Sum: %d\n", result[0]);
//     printf("Product: %d\n", result[1]);

//     return 0;
// }