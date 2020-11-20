#include<stdio.h>
int main()
{
int a[5];
int i,b,S,Med;
float Me;
printf("The number of digits");
scanf("%d", &b );
printf("Enter the digits");
for(i=0;i<b;i++)
{
printf("*");
scanf("%d", &a[i]);
S=S+a[i];
}
Me=S/b;
printf("\n%d", &Me);
if(b%2==0)
{
i=(b/2)-1;
printf("\n%d", a[i]);
i=(b/2+1)-1;
printf("\n%d", a[i]);
}
else
{
i=((b+1)/2)-1;

printf("\n%d", a[i]);
}
return 0;
}

