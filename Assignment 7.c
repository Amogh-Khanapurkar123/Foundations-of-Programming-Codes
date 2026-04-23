#include<stdio.h>

float average(float a,float b,float c)
{
return ((a+b+c)/3);
}
struct student
{
char name[20];
int roll,n;
float m1,m2,m3;
float percentage;
};

int main()
{
int n,i;
struct student s[100];

printf("Enter number of students");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter name of the student");
scanf("%s",s[i].name);
printf("Enter roll number");
scanf("%d",&s[i].roll);
printf("Enter marks of 3 subjects");
scanf("%f%f%f",&s[i].m1,&s[i].m2,&s[i].m3);
s[i].percentage=average(s[i].m1,s[i].m2,s[i].m3);
}
for(i=0;i<n;i++)
{
printf("Name: %s | Roll: %d|Percentage:%.2f%%\n",s[i].name,s[i].roll,s[i].percentage);
}
return 0;
}



