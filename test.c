#include<stdio.h>
void main()
{
typedef int x[2];
x myArray[3]={1,2,3,4};
printf("%u",sizeof(myArray));
printf("\n%d",myArray[1][0]);
}
