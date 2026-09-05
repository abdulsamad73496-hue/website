//pattern
#include<stdio.h>
int main ()
{
int i,j,k;
    for (i=1;(i<=9);i++)
      {   if(i==1||i==9)
           {k=1;}
         else if (i==2||i==8)
            {k=2;}
         else if (i==3||i==7)
             {k=3;}
         else if (i==4||i==6)
             {k=4;}
         else 
            {k=5;}
      for (j=1;(j<=k);j++)
           {printf("%d", j);}
       printf("\n");
      }
return 0;
}
