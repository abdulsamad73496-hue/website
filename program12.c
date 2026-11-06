#include<stdio.h>

void custom_strcpy(char *ptr)
{
    char b[100];
    int i = 0;

    while (*ptr != '\0' && *ptr != '\n')
    {
        b[i] = *ptr;
        ptr++;
        i++;
    }

    b[i] = '\0';

    for (int j = 0; j < i; j++)
    {
        printf("%c", b[j]);
    }
}

int main()
{
    char a[100], *p;

    fgets(a, sizeof(a), stdin);

    p = a;

    custom_strcpy(p);

    return 0;
}
