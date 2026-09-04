//pattern
#include<stdio.h>
int main()
{
int  i,j,a,b;
a=1;
b=5;
  for (i=1;(i<=5);i++)
     {  
        for(j=a;(j<=b);j++)
            {printf("%d", j);}
            printf("\n");
            a=a+1;
            b=b+1;
       }
return 0;
}
       
