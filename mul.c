#include<stdio.h>
int main()
{
int i,d,x;
printf("Enter the digit");
scanf("%d", &d);
for(i=1;i<=10;i++)
{
x=d*i;
printf("\n%d*%d=%d",d,i,x);
}
return 0;
}
