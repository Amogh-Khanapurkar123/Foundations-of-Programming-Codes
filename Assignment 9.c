#include<stdio.h>
int main()
{
  int n,r,c,og,sum=0;
  printf("Enter a number");
  scanf("%d\n",&n);
  og=n;
  while(n>0)
 {
   r=n%10;
  n=n/10;
  c=r*r*r;
  sum=sum+c;
}
 if(sum==og)
{printf("The number is an armstrong number");
}
else
{printf("The number is not an armstrong number");
}
return 0;
}
