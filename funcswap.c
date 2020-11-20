#include<stdio.h>
void swap(int*,int*);
void main()
{
int a,b;
printf("Enter the values of a,b");
scanf("%d%d", &a,&b);
swap(&a,&b);
printf("In main() a is %d \n b is %d",a,b);
}
void swap(int *x,int *y)
{
int temp=*x;
*x=*y;
*y=temp;
}
