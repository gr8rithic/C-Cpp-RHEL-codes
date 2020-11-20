#include<stdio.h>
int main()
{
	float l,b,s,h,a,d,A,P,A1,P1;
	printf("Enter the values");
	scanf("%f%f%f%f%f%f", &l,&b,&s,&h,&a,&d);
	P= 2*(l+b);
	printf("The perimeter of the rectangle is %f", P);
	A=l*b;
	printf("\nThe area of the rectangle is %f", A);
	A1= (s*h)/2;
	printf("\nThe area of triangle is %f", A1);
	P1= a+d+s;
	printf("\nThe perimeter of triangle is %f", P1);
	return 0;
}