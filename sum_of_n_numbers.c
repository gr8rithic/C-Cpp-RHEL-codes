#include<stdio.h>
int main()
{
int n,S=0,i;
printf("Enter the sum of n numbers");
scanf("%d", &n);
for(i=0;i<=n;i++)
{
S=S+i;
}
printf("The sum of n numbers is %d", S);
return 0;
}

