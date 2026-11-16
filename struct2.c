#include <stdio.h>

struct Student
{
    char name[50];
    int roll_no;
    float marks[5];
};

int main()
{
    struct Student s;
    float total = 0, percentage;

    printf("Enter Student Name: ");
    printf("%s", s.name);

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks in 5 subjects:\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%f", &s.marks[i]);
        total = total + s.marks[i];
    }

    percentage = (total / 500) * 100;

    printf("\n----- Student Details -----\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_no);
    printf("Total Marks: %.2f / 500\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
