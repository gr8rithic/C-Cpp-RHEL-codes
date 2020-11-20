#include<stdio.h>
int main()
{
int i,j,p;
scanf("%d", &p);
for(i=1;i<=p;i++)
{
for(j=1;j<=i;i++)
{
printf("%d", &j);
}
printf("\n");
}
return 0;
}
