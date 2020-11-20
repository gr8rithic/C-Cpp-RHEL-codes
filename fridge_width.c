#include<stdio.h>
int main()
{
 float B,A,L,d;
 printf("Enter the values of wavelength,distance from the object to the poimt of contact,thickness");
 scanf("%f%f%f", &A,&L,&d);
 B=(A*L)/(2*d);
 printf("\nThe fridge width is %f", B);
 return 0;
}
 