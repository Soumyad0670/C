#include <stdio.h>
#include <string.h>

// Structure example - all members exist simultaneously
struct Employee {
    int id;
    char name[50];
    float salary;
};

// Union example - members share the same memory space
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    // Structure demonstration
    struct Employee emp;
    emp.id = 101;
    strcpy(emp.name, "John Doe");
    emp.salary = 45000.50;

    printf("Structure Example:\n");
    printf("Employee ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n\n", emp.salary);

    // Union demonstration
    union Data data;
    
    data.i = 42;
    printf("Union Example:\n");
    printf("data.i: %d\n", data.i);
    
    data.f = 123.45;
    printf("data.f: %.2f\n", data.f);
    
    strcpy(data.str, "Hello");
    printf("data.str: %s\n\n", data.str);

    // Size comparison
    printf("Size of structure: %zu bytes\n", sizeof(struct Employee));
    printf("Size of union: %zu bytes\n", sizeof(union Data));

    return 0;
}