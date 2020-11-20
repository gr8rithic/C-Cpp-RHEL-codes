#include<stdio.h>
void main()
{
int *a;
int x,y,j,i;
printf("Enter the number of pizza slices");
scanf("%d",&x);
printf("Enter the number of types");
scanf("%d",&y);
printf("Enter the types wrt to number of pieces");
a=(int*)malloc(y*sizeof(int));
for(i=0;i<y;i++)
{
printf("Enter the pizza slices in a[%d]",i);
scanf("%d",&a[i]);
}
for(i=y-1;i>=0;i--)
{
for(j=0;j<y-1;j++)
{
if(a[i]<x)
{
x=x-a[i];


printf("%d",a[i]);
printf("\n%d",x);
}
}
}
}

