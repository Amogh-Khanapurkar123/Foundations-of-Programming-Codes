#include<stdio.h>
int main()
{
	float bs,hra,ta,gs,pt,net;
	printf("Enter basic salary");
	scanf("%f",&bs);
	hra=0.10*bs;
	ta=0.05*bs;
	gs=bs+hra+ta;
	pt=0.02*gs;
	net=gs-pt;
	printf("The net salary of employee is %.2f",net);
	return 0;

}
