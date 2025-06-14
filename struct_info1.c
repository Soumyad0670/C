#include<stdio.h>
#include<string.h>
#include<ctype.h>
struct Info {
    char name[25];
    int age, roll_no;
    float marks;
    char gender;
};
int main() {
    struct Info info ={"Soumyadeep Dutta", 18, 24051355, 8.95, 'M'};
    printf("Enter the information of the students:\n");
    // printf("Name:");
    // scanf("%[^\n]", info.name);
    // printf("Age:");
    // scanf("%d", &info.age);  
    // printf("Roll No:");
    // scanf("%d", &info.roll_no);
    // printf("Marks:");
    // scanf("%f", &info.marks);
    // printf("Gender:");
    // scanf("%c", &info.gender);
    printf("\nStduent Information:\n");
    printf("=====================================\n");
    printf("Roll No: %d\n", info.roll_no);
    printf("Name: %s\n", info.name);
    printf("Gender: %c\n", info.gender);
    printf("Marks: %.2f\n", info.marks);
    printf("=====================================\n");
    return 0;
}

