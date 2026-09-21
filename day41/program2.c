//printf each charcter on new line..
#include<stdio.h>
int main ()
{
int  n;
printf("enter how  many char you are input ?");
scanf("%d", &n);
char a[n];
getchar ();
for (int i=0;i<n;i++)
   {
    scanf("%c", &a[i]); 
   }
printf("\n");
for (int i=0;i<n;i++)
   {
    printf("%c\n", a[i]);
   }
return 0;
}
