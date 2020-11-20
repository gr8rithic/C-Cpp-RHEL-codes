#include<stdio.h>
int main()
{
int a[10];
int b[10];
int c=0,d=0,i,j,k,Q=0,W=0;
for(i=0;i<10;i++)
{
if(i%2==0)
{
d++;
printf("%d",d);
}
else
{
c++;
printf("%d",c);
}
}
for(i=0;i<10;i++)
{
if(i%2==0)
{
for(j=0;j<10;j++)
{
a[j]=i;
}
}
else
{
for(k=0;k<10;k++)
{
b[k]=i;
}
}
}
for(j=0;j<d;j++)
{
Q+=a[j];

}
for(k=0;k<c;k++)
{
W+=b[k];
}
printf("The sum of even numbers is %d",Q);
printf("The sum of odd numbers is %d",W);
return 0;
}


