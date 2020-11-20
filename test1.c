#include<stdio.h>
void add(int *,int *);
void main()
{
int *a[10], *S;
add(&a,&S);
printf("\n%d", S);
}
void add(int *x,int *y)
{
int i;
for(i=0;i<10;i++)
{
scanf("%d",&x+i);
}
for(i=0;i<10;i++)
{
*y=*y+*(x+i);
}
}

