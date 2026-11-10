//multiply matrix
#include<stdio.h>
int main ()
{
int i=1,j=2;
int c[i][i];
int  a[i][j]={
             {2,3,3},
             {1,2,3}
             };
int b[j][i]={
            {3,1},
            {4,2},
            {5,3}
            };
int k=0,l=0;
for (;k<2;k++)
    {  
     for (;l<2;l++)
          { 
            for (int r=0;r<3;r++)
               { 
                  c[k][l]+=a[k][r]*b[r][l];
                 }
            }
      }
for (int k=0;k<2;k++)
   {for (int l=0;l<2;l++)
        {  printf("%d",c[k][l]);}
return 0;
}          

