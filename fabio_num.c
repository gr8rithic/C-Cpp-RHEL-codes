#include<stdio.h>
int main()
{
int c,a=1,b=2,i;
printf("Enter the number of digits");
scanf("%d", &c);
printf("%d", a);
printf("%d", b);
for(i=1;i<=c;i++)
{
a=a+b;
b=b+a;
printf("%d", a);
printf("%d",b);
}
return 0;
}
