#include<stdio.h>
int main () 
{
int n, *p;
scanf("%d", &n);
p=&n;
printf("%d %p", n, p);
return 0;
} 
