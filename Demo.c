#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr; 
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));
    }
    return 0;
}
#include <string.h>
struct Person {
    char name[50];
    int age;
};
void printPerson(struct Person *p) {
    printf("Name: %s, Age: %d\n", p->name, p->age);
}
void structure_pointer_example() {
    struct Person person1;
    strcpy(person1.name, "Alice");
    person1.age = 30;

    struct Person *ptr = &person1;
    printPerson(ptr);
}

// Call the structure pointer example
// structure_pointer_example();

void printMessage(const char *msg) {
    printf("Message: %s\n", msg);
}

void function_pointer_example() {
    void (*funcPtr)(const char *);
    funcPtr = printMessage;

    funcPtr("Hello from function pointer!");
}

// Call the function pointer example
function_pointer_example();