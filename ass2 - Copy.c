#include<stdio.h>
int main()
{
	int a,b;
	char opr;
	printf("Enter two numbers a and b");
	scanf("%d%d",&a,&b);
	printf("Enter an operation(+,-,*,/)");
	scanf(" %c",&opr);
	if(opr=='+')
	{printf("%d",a+b);}
	else if(opr=='-')
	{printf("%d",a-b);}
    else if(opr=='*')
    {printf("%d",a*b);}
	else if(opr=='/')
	{printf("%d",a/b);}
	return 0;
	
	}
