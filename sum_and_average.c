#include <stdio.h>
int main()
{
float a,b,c,d,e,S,A;
printf("Enter the values of a,b,c,d,e");
scanf("%f%f%f%f%f", &a,&b,&c,&d,&e);
S=a+b+c+d+e;
printf("The sum of all the integers is %f", S);
A=(S)/5;
printf("\nThe average of all the integer is %f", A);
return 0;

}