#include<stdio.h>
#include<string.h>
main()
{
	char fname[10],lname[10];
	//reading a values from the user
	printf("enter the first name of the user:");
	scanf("%s",&fname);
	printf("enter the last name of the user:");
	scanf("%s",&lname);
	//strcat(destination,source) function is used to combine two strings
	strcat(fname,lname); 
	//displaying the full name
	printf("\nfull name of the user is: %s",fname);
}
