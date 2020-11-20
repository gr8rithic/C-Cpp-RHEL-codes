#include <stdio.h>
int main()
{
int a,b,c,d ;
printf("Enter the choice /n");
scanf("%d", &a);

switch(a)
{
	case 1: printf("Enter the numbers b and c/n");
	        scanf("%d%d", &b,&c);
			d= b+c;
			printf("The sum of b and c is %d", d);
			break;
			
    case 2: printf("Enter the numbers b and c /n");
	        scanf("%d%d", &b,&c);
			d= b-c;
			printf("The subtraction of b abd c is %d", d);
			break;
			
	case 3: printf("default");
	        break;
}
}	