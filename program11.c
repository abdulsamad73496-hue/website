#include<stdio.h>
void custom_strlen(char  *ptr)
    {
     int l=0;
     while (*ptr!='\0')
           {
            l++;
            ptr++;
           }
     printf("length %d", l);
    }
int main ()
{
char a[1000],*p;
fgets(a, sizeof(a), stdin);
p=a;
printf("%s\n", a);
custom_strlen(p);
return 0;
}
