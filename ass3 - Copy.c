#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter a number for its multiplication table");
	scanf("%d",&n);
	while(i<=10)
	{printf("%d * %d=%d\n",n,i,n*i);
	i++;
}
	return 0;
}
