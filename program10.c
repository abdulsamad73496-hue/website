//pattern
#include<stdio.h>
int main()
{
int i,j,k,s;
    for (i=1;(i<=7);i++)
       {
        if (i==1||i==7)
            { s=1;}
        else  if (i==2||i==6)
            { s=2;}
        else if (i==3||i==5)
             {s=3;}
        else 
            { s=4;}
        for (j=1;(j<=s);j++)
            { printf("*");}
       printf("\n");
        }
return 0 ;
}
