#include <stdio.h>
int main()
{
float a,b,c,A,S,P,D;
printf("Enter the values of a,b");
scanf("%f%f", &a,&b);
A=a+b;
printf("The sum is %f", A);
S=a-b;
printf("\nThe subtraction is %f", S);
P=a*b;
printf("\nThe product is %f", P);
D=a/b;
printf("\nThe division is %f", D);
return 0;
}