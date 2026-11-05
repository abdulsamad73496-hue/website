#include<stdio.h>
void sum_array(int *ptr,int array_size)
     {
      int  sum=0;
       for (int i=0;i<array_size;i++)
           {
             sum=*ptr+sum;
             ptr++;
           }
        printf("The sum of array is:%d", sum);
      }
int main ()
{
int a[]={10,5,8,2,15},*p=a,b;
b=sizeof(a)/4;
sum_array(p,b);
return 0;
}

      
