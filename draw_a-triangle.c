#include<stdio.h>
int main()
{
int a,j,i;
printf("Enter the numbers of rows");
scanf("%d", &a);
for(i=1;i<=a;i++)
{
for(j=1;j<=i;j++)
{
if(j=1)
printf("A");
else if(j=2)
printf("B");
else
printf("C");
}
printf("\n");
}
return 0;
}

