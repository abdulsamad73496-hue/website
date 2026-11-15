#include<stdio.h>
struct student
  {
   int roll_no;
   char name[50];
   float marks;
  };
int main()
{
struct student s1[3];
for (int i=0;i<3;i++)
   {scanf("%d%s%f", &s1[i].roll_no,s1[i].name,&s1[i].marks);}
for (int i=0;i<3;i++)
   {printf("%d%s%f", s1[i].roll_no,s1[i].name,s1[i].marks);}
return 0;
}
