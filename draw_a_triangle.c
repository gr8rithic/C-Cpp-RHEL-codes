#include<stdio.h>
int main()
{
int d ,j,i;
printf("enter the number of rows");
scanf("%d", &d);
for(i=1;i<=d;i++)
{
for(j=1;j<=i;j++)
{
printf("*");
}
printf("\n");
}
return 0;
}
