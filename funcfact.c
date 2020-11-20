#include<stdio.h>
void fact(int);
void main()
{
	int n,fac;
	printf("Enter the number");
	scanf("%d", &n);
	fact(n);
}
void fact(int x)
{
	int t=1,i;
	for(i=1;i<=x;i++)
	{
		t=t*i;
	}
	printf("The value in fact(): %d", t);
}
 
