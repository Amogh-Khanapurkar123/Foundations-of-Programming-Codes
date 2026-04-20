#include<stdio.h>
#include<math.h>
int main()
{
	float n,sq,sqroot,cb,cbroot,prime,fact,pmfc;
	printf("Enter a number");
	scanf("%f",&n);
    sq=n*n;
    printf("\nThe square of two numbers is %.2f",sq);
    sqroot=sqrt(n);
    printf("\nThe square root of number is %.2f",sqroot);
    cb=n*n*n;
    printf("\nThe cube of number is %.2f",cb);
    cbroot=cbrt(n);
    printf("\nThe cube root of number is %.2f",cbroot);
    if(n/2!=0 && n/n==0)
    {printf("The number is prime number");}
    else
    printf("The number is not prime");
    
	
    
return 0;
}
