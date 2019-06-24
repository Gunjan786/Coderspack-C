#include<stdio.h>
main(){
	int choice=0;
	float c=0,f=0;
	printf("enter the choice:\n1.celsius\n2.fahrenheit\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\nenter the temperature in celsius:");
	scanf("%f",&c);
	f=1.8*c+32;
	printf("\ntemperature in fahrenheit is: %f",f);
	break;
	case 2:
		printf("\nenter the temperature in fahrenheit:");
	scanf("%f",&f);
	c=(f-32)*.56;
	printf("\ntemperature in celsius is: %f",c);
	break;
	case 3:
		exit(0);
	default:printf("invalid input");
	
	}
}
