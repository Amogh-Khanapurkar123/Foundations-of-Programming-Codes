#include<stdio.h>
void swap_without_pointers(int a,int b,int temp)
{
temp=a;
a=b;
b=temp;
printf("The numbers after swapping are:%d\n%d\n",a,b);
};
void swap_with_pointers(int *p1, int *p2) {
    int temp;
    
    temp = *p1;   // temp = value at address p1
    *p1 = *p2;    // value at address p1 = value at address p2
    *p2 = temp;
    printf("The numbers after swapping are:%d\n%d\n",*p1,*p2);
  };
int main()
{
int n1,n2,t;
printf("Enter two numbers ");
scanf("%d%d",&n1,&n2);   
swap_without_pointers(n1,n2,t);
swap_with_pointers(&n1,&n2);

return 0;
}

