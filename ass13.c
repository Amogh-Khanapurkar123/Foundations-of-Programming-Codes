#include<stdio.h>
int main()
{
	int n,r,ono,rev=0;
	printf("Enter a number to print its reverse\n");
	scanf("%d",&n);
	while(n>0)
	{r=n%10;
	n=n/10;
	rev=rev*10+r;
	
	}
	printf("Reverse of the number is %d\n",rev);
	return 0;
}

