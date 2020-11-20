#include<stdio.h>
int main()
{
int i=1,fact=1,a;
printf("the factorial to be found");
scanf("%d", &a);
while(i<=a)
{
fact=fact*i;
i++;
}
printf("The factorial is %d", fact);
return 0;
}
