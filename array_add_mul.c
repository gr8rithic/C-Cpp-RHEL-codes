#include<stdio.h>
int main()
{
int a[10],i,j,S=0,P=1;
printf("The number of digit");
scanf("%d", &j);
for(i=0;i<j;i++)
{
scanf("%d", &a[i]);
}
for(i=0;i<j;i++)
{
S=S+a[i];
P=P*a[i];
}
printf("\n%d", S);
printf("\n%d", P);
return 0;
}











