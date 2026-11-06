#include<stdio.h>
int main ()
{
char a[100],*ptr;
int  l=0;
fgets(a,sizeof(a),stdin);
ptr=a;
while(*ptr!='\0')
     {
      if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u'||*ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U')
            {
             l++;
            }
       ptr++;
     }
printf("THE TOTAL NO OF VOWEL:%d", l);
return 0;
}
