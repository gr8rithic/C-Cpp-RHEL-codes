#include<stdio.h>
void swap(int *,int *);
void main()
{
int *a,*b;
scanf("%d%d",&a,&b);
swap(&a,&b);
printf("In main a,b is %d %d",a,b);
}
void swap(int *x,int *y)
{
*x=*x+*y;
*y=*x-*y;
*x=*x-*y;
}
