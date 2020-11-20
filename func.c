#include<stdio.h>
void swap(int,int);
void main()
{
int a,b;
printf(" the values of a,b");
scanf("%d%d", &a,&b);
swap(a,b);
printf("After swapping in main() a is %d,\nb is %d\n",a,b);
}
void swap(int x, int y)
{
int temp=x;
x=y;
y=temp;
printf("After swapping n swap() a is %d,\nb is %d",x,y);
}
