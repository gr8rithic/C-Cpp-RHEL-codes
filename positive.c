#include<stdio.h>
int main()
{
int a;
printf("Enter the value to be tested");
scanf("%d", &a);
if(a>0)
{
printf("The value is positive");
}
else if(a<0)
{
printf("The value is negative");
}
else
{
printf("The value is neither positive or negative");
}	
return 0;
}