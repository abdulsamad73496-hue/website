#include<stdio.h>
struct rectangle
   {
    int length;
    int breath;
   };
void updatepointer(struct rectangle *p)
     {
     p->length=p->length+5;
     p->breath=p->breath+5;
     }
int main ()
  {
struct rectangle a ;
    a.length=10;
    a.breath=15;
printf("Before increase: %d,%d\n", a.length,a.breath);
updatepointer(&a);
printf("After  increase: %d,%d", a.length, a.breath);
return 0;
 } 
