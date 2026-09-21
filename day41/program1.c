#include <stdio.h>

int main()
{
    char a[100];
    int n, count = 0;

    printf("How many char in string? ");
    scanf("%d", &n);

    printf("Enter string: ");

    for(int i = 0; i < n; i++)
    {
        scanf(" %c", &a[i]);
        count++;
    }

    printf("The no of characters in string %d", count);

    return 0;

}
