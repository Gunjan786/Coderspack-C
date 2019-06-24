#include<stdio.h>
main()
{
	int n=0,r=0,rev=0;
	//reading interger value from user
	printf("enter a value of integer:");
	scanf("%d",&n);
	//reverse of a string
	while(n>0)
	{
		r=n%10;// storing remainder
		rev=rev*10+r;//reverse
		n=n/10;
	}
	printf("reverse of a no is : %d",rev);
}
