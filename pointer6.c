#include<stdio.h>
int main  ()
{
int  a[]={1,3,5,7,9}, *ptr;
printf("Subcript notation:%d\n", a[2]);
ptr=a;
printf("Pointer notation with base address:%d\n",  *(ptr+2));
ptr=ptr+2;
printf("Pointer notation with offset pointer:%d", *ptr);
return 0;
}
