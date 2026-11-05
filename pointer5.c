#include<stdio.h>
int main ()
{
int a[]={10,20,30,40,50}, *p,*q,b=10;
p=a;
q=&b;
for (int i=0;i<5;i++)
    {
     printf("Element %d: %d %p\n",i,*p,q);
     p++;
     }
return 0;
}
 
