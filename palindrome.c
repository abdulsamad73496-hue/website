#include<stdio.h>
#include<string.h>
int main ()
{
char a[100],b[100];
    printf("enter string::");
    scanf("%s" ,a);
    int k=strlen(a);
int i=k-1;
int s=0;
  for (;i>=0;i--)
      {b[s]=a[i];
       s++;  }
if (strcmp(a,b)==0)
   {printf("plaindrome");}
else 
   {printf("not plaindrome");}
return 0;
}
