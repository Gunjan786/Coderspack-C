#include<stdio.h>
#include<string.h>
 main()
{
	char s[10],r[10];
	printf("enter the string:");
	scanf("%s",&s);
	strcpy(r,s);
	strrev(s);
	printf("rev is %s",s);
	if(strcmp(s,r)==0)
	{
		printf("\nstring is palindrome");
	}
	else{
		printf("\nstring is not palindrome");
	}
}
