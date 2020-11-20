#include<stdio.h>
void fact(int x);
void main()
{
int a,i;
printf("enter any number");
scanf("%d",&a);
fact(a);
}
void fact(int x)
{
int b=1,i;
for(i=1;i<=x;i++)
{
b*=i;
}
printf("the factorial is %d",b);
}
