#include<stdio.h>
int main()
{
	int a,b,temp,i,found=0;
	
	printf("Enter two numbers for there scd and gcd\n");
	scanf("%d%d",&a,&b);
	/////////smallest common divisor/////
	
	for(i=2;i<=a &&i<=b;i++)
	{
		if(a%i==0 && b%i==0)
		{
		printf("The smallest common divisor is %d\n",i);
	    found=1;
	    break;
	}
}
	if(found==0)
    {printf("Smallest common divisor is 1");
	}
	////////////Greatest Common Divisor////
	if(a>b)
	{temp=a;
	a=b;
	b=temp;
	}
	while((b%a)!=0)
	{temp=b%a;
	b=a;
	a=temp;
	}
	printf("The GCD is %d\n",a);
	return 0;
}
