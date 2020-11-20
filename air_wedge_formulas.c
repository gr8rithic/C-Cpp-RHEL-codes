#include<stdio.h>
int main()
{
float B,A,L,d;
int a;
printf("Enter the choice to find \n1:For wavelength,\n2:distance from the point,\n3:thickness");
scanf("%d",&a);
switch(a)
{
  case 1: printf("\nEnter the values of \n1:fridge width,\n2:thickness,\n3:distance from the point of contact");
          scanf("%f%f%f", &B,&d,&L);
		  A=(B*2*d)/L;
		  printf("\nThe wavelength is %f", A);
		  break;
		  
  case 2: printf("\nEnter the values \n1:fridge width,\n2:thickness,\n3:wavelength");
          scanf("%f%f%f", &B,&d,&A);
          L=(B*2*d)/A;
          printf("\nThe distance from the point is %f", L);
		  break;

  case 3: printf("\nEnter the values of \n1:wavelength,\n2:distance from the point of contact,\n3:fridge width");
          scanf("%f%f%f", &A,&L,&B);
          d=(A*L)/(2*B);
          printf("\nThe thickness is %f", d);
		  break;
  case 4: printf("\nNO choices found");
          break;  
}
return 0;
}		  
		  
		  
		  
