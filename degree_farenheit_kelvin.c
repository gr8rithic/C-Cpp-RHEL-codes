#include<stdio.h>
int main()
{
float c,F,K;
int a;
printf("Enter the choice to be taken \ncelsius to kelvin,\ncelsius to farenheit");
scanf("%d", &a);
switch(a)
{
 case 1: printf("Enter the value in celsius scale");
         scanf("%f", &c);
         K= c +273.15;
         printf("The convertion of celsius into kelvin scale is %f", K);
		 break;
		 
 case 2: printf("Enter the value in celsius scale");
         scanf("%f", &c);
         F= ((9*(c))/5)+32;
		 printf("The convertion of degree into farenheit is %f", F);
		 break;
		 
 case 3:printf("\nChoice not found");
        break;
}
return 0;
} 



