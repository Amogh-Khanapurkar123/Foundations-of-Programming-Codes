#include<stdio.h>
int main()
{
  int m1,m2,m3,m4,m5,avg;
  
  printf("Enter the marks of five subject");
  scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
  avg=(m1+m2+m3+m4+m5)/5;
  if(m1>40 && m2>40 && m3>40 && m4>40 && m5>40)
  {printf("The student has passed"); 
  
    if(avg>=75)
    {printf("\nYour grade is distinction");}
	else if(avg>=60 && avg<75)
	{printf("\nFirst division ");}
	else if(avg>=50 && avg<60)
	{printf("\nSecond Division");}
	else if(avg>=40 && avg<50)
	{printf("\nThird division");}
  }
  else
  {printf("The student has failed");}
  return 0;
}
