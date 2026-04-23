#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;
printf("Enter how many random numbers you want");
scanf("%d",&n);
printf("Pseudo random numbers:\n");
srand(100);  
  for (int i = 0; i < n; i++) {
    int num = rand() % 100000 + 1;
    printf("%d\n ", num);
  }
  printf("\n");
return 0;
}

