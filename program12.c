//wrp to calcu,ate factorial using function..
#include<stdio.h>
int factorial(int a)
{
int b=1;
for (int i=1;i<=a;i++)
   {  b=b*i;}
      return b;
}
int main()
{
int  fact,n;
     printf("enter the no  whose factorial you  find:");
     scanf("%d",&n);
    fact=factorial(n);
    printf("%d",fact);
return 0;
}
