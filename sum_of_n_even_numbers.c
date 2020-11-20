#include<stdio.h>
int main()
{
int S=0,i,n;
printf("Enter the number of terms");
scanf("%d", &n);
for(i=1;i<=n;i++)
{
S=i*2+S;
}
printf("the sum is %d", S);
return 0;
}
