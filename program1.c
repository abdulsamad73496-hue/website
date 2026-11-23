//intiail name ..
#include<stdio.h>
#include<string.h>
int main ()
{
int n,count=0;
printf("Enter how many char:");
scanf("%d", &n);
char a[n+1];
fgets(a, sizeof(a),stdin);
int length=strlen(a);
while (a[length]!=32)
    {count=count+1;
     length--;}
int i=0,j;
for (;i<=(strlen(a)-count);i++) 
     {  j=i+1;
       while  (a[i]==32 && a[j]!=32)
            {printf("%c",j);}
     }
int s=strlen(a)-count;
for  (int k=s;k<=strlen(a);k++)
    {printf("%c" , a[k]);}
return 0;
}
