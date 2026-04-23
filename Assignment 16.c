#include<stdio.h>
int main()
{
int n,odd[20],even[20],num[20],i,j=0,k=0;
printf("Enter number of integers\n");
scanf("%d",&n);
printf("The integers are:");
for(i=0;i<n;i++)
{
scanf("%d\n",&num[i]);
}
for(i=0;i<n;i++)
{
if(num[i]%2==0)
{
even[j]=num[i];
j++;
}
else if(num[i]%2!=0)
{
odd[k]=num[i];
k++;
}
}
printf("Even Numbers:");
for(i=0;i<j;i++)
{
printf("%d\n",even[i]);
}
printf("Odd Numbers:");
for(i=0;i<k;i++)
{
printf("%d\n",odd[i]);
}
return 0;
}

