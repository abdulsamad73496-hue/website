#include <stdio.h>

struct Student {
    int roll;
    int marks;
};

int main() {
    struct Student s[5];
    int i, max = 0;

    for (i = 0; i < 5; i++) {
        printf("Enter roll number and marks of student %d: ", i + 1);
        scanf("%d %d", &s[i].roll, &s[i].marks);
    }

    for (i = 1; i < 5; i++) {
        if (s[i].marks > s[max].marks) {
            max = i;
        }
    }

    printf("\nStudent with highest marks:\n");
    printf("Roll Number: %d\n", s[max].roll);
    printf("Marks: %d\n", s[max].marks);

    return 0;
}
