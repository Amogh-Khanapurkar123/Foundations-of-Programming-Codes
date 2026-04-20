#include<stdio.h>
#include<math.h>
int main()
{
int a,b,n,i,base,expo,fact;
 
char opr;
printf("Enter the operation to perform(1.sum,2.sub,3.multiply,4.division,5.exponential,6.factorial)");
scanf("%d",&opr);
switch (opr){
	case(1):
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	int sum=a+b;
	printf("The sum of two numbers is %d",sum);
	break;
	case(2):
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	int diff=a-b;
	printf("The difference of two numbers is %d",diff);
	break;
	case(3):
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	int mul=a*b;
	printf("The product of two numbers is %d",mul);
	break;
	case(4):
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	int div=a/b;
	printf("The division of two numbers is %d",div);
	break;
	case(5):
	printf("Enter base and exponent");
	scanf("%d%d\n",&base,&expo);
	int result=pow(base,expo);
	printf("%d^%d = %d\n", base, expo, result);
	break;
	case(6):
	printf("\nEnter positive number for its factorial");
	scanf("%d",&n);
	fact=1;
	i=n;
	while(i>1)
	{
	fact=fact*i;
	i--;
}
	printf("factorial of number is %d",fact);
	break;
	default:
	printf("Invalid number");
	}
return 0;
}

