#include<stdio.h>
int main()
{
int i,j;
int a[2][2];
int b[2][2];
int c[2][2];
printf("Enter the 2*2 matrix a");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d", &a[i][j]);
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t", a[i][j]);
}
printf("\n");
}
printf("Enter the 2*2 matrix b");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d", &b[i][j]);
}
}
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t", b[i][j]);
}
printf("\n");
}
printf("The sum is\n ");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
c[i][j]=a[i][j]+b[i][j];
printf("%d\t", c[i][j]);
}
printf("\n");
}
return 0;
}











