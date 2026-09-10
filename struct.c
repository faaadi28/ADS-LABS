#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks[3];
    float totalMark;
    float averageMark;
};

int main() {
    struct Student s;

    printf("Enter Student Name: ");
    scanf(" %[^\n]s", s.name);

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollNumber);

    printf("Enter marks for 3 subjects:\n");
    s.totalMark = 0;
    for(int i = 0; i < 3; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &s.marks[i]);
        s.totalMark += s.marks[i];
    }

    s.averageMark = s.totalMark / 3.0;

    printf("\n--- Student Report Card ---\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.rollNumber);
    printf("Marks Obtained: %.2f, %.2f, %.2f\n", s.marks[0], s.marks[1], s.marks[2]);
    printf("Total Marks: %.2f\n", s.totalMark);
    printf("Average Marks: %.2f\n", s.averageMark);

    return 0;
}
