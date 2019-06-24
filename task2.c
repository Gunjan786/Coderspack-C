#include<stdio.h>
main(){
	float ctemp=0, ftemp=0;
	//reading a value from the user in celsius
	printf("enter the value of temperature in celsius:");
	scanf("%f",&ctemp);
	//converting celsius to fahrenheit
	ftemp=(1.8*ctemp)+32;
	//displaying the temp in F
	printf("temperature in fahrenheit is:%f",ftemp);	
}
