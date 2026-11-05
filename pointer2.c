#include<stdio.h>
int main ()
{
int n, *p;
scanf("%d", &n);
printf("Value before changed:%d\n", n);
p=&n;
printf("Enter which value you have  to change  through pointer:");
scanf("%d", &*p);
printf("The value after changed %d" , n);
return 0;
}
