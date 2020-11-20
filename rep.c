#include<stdio.h>
int main()
{
int a=0,b=0,c=0,i,B,n;
printf("Enter the number of candidates to vote");
scanf("%d", &n);
for(i=1;i<=n;i++)
{
scanf("%d", &B);
switch(B)
{
case 1: a=a+1;
        break;
case 2: b=b+1;
        break;
case 3: c=c+1;
        break;
}
}
if(a>b && a>c)
{ 
printf("x is the winner");
}
else if(b>a && b>c)
{
printf("y is the the winner");
}
else if(c>a && c>b) 
{
printf("c is the winner");
}
else
{
printf("The match is draw");
}
return 0;
}
