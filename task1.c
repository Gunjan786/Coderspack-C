#include<stdio.h>
main()
{
	char name[10];
	int age=0;
	int phno[11];
	//reading values from the user
	printf("enter the name of the user:");
	scanf("%s",&name);
	printf("\nenter the age of the user:");
	scanf("%d",&age);
	printf("\nenter the phnno of the user:");
	scanf("%s",&phno);
	//displaying the values
	printf("\nname of the user is: %s \n age of the user is: %d \nphno of the user is: %s",name,age,phno);
}
