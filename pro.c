#include<stdio.h>
int main (){
int n;
scanf("%d", &n);
int arr[n];
for (int i=0;i<n;i++)
     {scanf("%d", &arr[i]);}
int tem=0, i, j,flag=0;
for (i=0;i<n;i++)
  {   for (j=0;j<n-i;j++)
      {
       if(arr[i+1]<arr[i])
         {
           flag=1;
          }
      }
  }
if (flag==1)
  {   printf("not sorted");}
else
    {printf("soretd");}
 return 0;
}
