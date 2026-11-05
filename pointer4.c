#include<stdio.h>
void  increment_value (int *p)
  {
    *p=50;
   }
int main()
{
int  n, *ptr;
printf("Enter value:");
scanf("%d", &n);
ptr=&n;
printf("Value before function call:%d\n", n);
increment_value(ptr);
printf("Value after function call:%d", *ptr);
return 0;
}
