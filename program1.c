#include<stdio.h>
#include<string.h>
int main()
{
char greeting[50]="welcome";
    int len=strlen(greeting);
    int size=sizeof(greeting);
     printf("length%d", len);
     printf("size%d", size);
    return 0;
}
