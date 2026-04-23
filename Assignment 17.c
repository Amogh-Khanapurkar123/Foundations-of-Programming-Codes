#include<stdio.h>
int main()
{
float deg,x,term,sum=0;
int i,n=10;
printf("Enter angle in degrees: ");
scanf("%f",&deg);
x=deg*3.14/180;
term=x;
for(int i=1;i<=n;i++)
{
sum+=term;
term= -term * x / ((2 * i) * (2 * i + 1));
}
printf("The sine = %f\n",sum);
return 0;
}
