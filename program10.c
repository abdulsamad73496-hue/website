#include<stdio.h>
int main ()
{
 int a[]={1,2,3,4,5,6}, *p,l,*q,temp;
 p=a;
 l=sizeof(a)/4;
 q=a+l-1;
for (int i=0;i<l;i++)
    {
     printf("%d", a[i]);
    }
printf("\n");
 while(p<q)
     {
      temp=*p;
      *p=*q;
      *q=temp;
       p++;
       q--;
     }
for (int i=0;i<l;i++)
    {
     printf("%d", a[i]);
    }
return 0;
}
 
