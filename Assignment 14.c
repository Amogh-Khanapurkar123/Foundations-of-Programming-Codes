#include<stdio.h>
int main()
{
int bin,dec=0,pos=1;
printf("Enter a binary number");
scanf("%d",&bin);
while(bin>0)
{
dec=dec+(bin%10*pos);
bin=bin/10;
pos=pos*2;
}
printf("Decimal Value:%d\n",dec);
return 0;
}


