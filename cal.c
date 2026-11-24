#include <stdio.h>
int main()
{
    int choice, a, b;
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(choice)
    {
        case 1:
            printf("Result = %d", a+b);
            break;

        case 2:
            printf("Result = %d", a-b);
            break;

        case 3:
            printf("Result = %d", a*b);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
