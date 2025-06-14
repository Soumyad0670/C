#include <stdio.h>
#include <string.h>
#define SUBJECTS 5
#define MAX_STUDENTS 100
#define PASS_MARK 40
#define FULL_MARK 100
struct Student {
    int rollNo;
    char name[50];
    char gender;
    float marks[SUBJECTS];
    float totalMarks;
};
void displayFailedStudents(struct Student students[], int n, int subject) {
    printf("\nStudents who failed in Subject %d:\n", subject + 1);
    printf("=====================================\n");
    for (int i = 0; i < n; i++) {
        if (students[i].marks[subject] < PASS_MARK) {
            printf("Roll No: %d, Name: %s\n", students[i].rollNo, students[i].name);
        }
    }
}
int main() {
    struct Student students[MAX_STUDENTS]; // Array of structures
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("\nEnter Student %d Details:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        getchar();
        scanf("%[^\n]s", students[i].name);
        printf("Gender (M/F): ");
        getchar();
        scanf("%c", &students[i].gender);
        students[i].totalMarks = 0;
        for (int j = 0; j < SUBJECTS; j++) {
            printf("Marks for Subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
            students[i].totalMarks += students[i].marks[j];
        }
    }
    printf("\nAll Students Information:\n");
    printf("=====================================\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Gender: %c\n", students[i].gender);
        for (int j = 0; j < SUBJECTS; j++) {
            printf("Subject %d Marks: %.2f\n", j + 1, students[i].marks[j]);
        }
        printf("Total Marks: %.2f\n", students[i].totalMarks);
        printf("-------------------------------------\n");
    }
    for (int j = 0; j < SUBJECTS; j++) {
        displayFailedStudents(students, n, j);
    }
    return 0;
}