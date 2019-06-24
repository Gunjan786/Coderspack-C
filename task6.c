
#include<stdio.h>
#include<math.h>
main()
{
	int x=0,b=0,count=0,q=0,a=0;
	//reading input from user
	printf("enter a value of interger:");
	scanf("%d",&x);
	//copying the value of x
	//(because when it will come out from the while loop the value of x will be 0)
	b=x;
	//calculating the power or lenght of the integer
	while(b>0)
	{
		b=b/10;
		count++;
	}
	printf("the power of a given no is:%d",count);
	b=x;
	//calculating the armstrong value
	while(b>0)
	{
		q=b%10;
		a=a+pow(q,count);
		b=b/10;
	}
	printf(" \narmstrong of the no is:%d",a);
	//comparing the original value with armstrong value
	if(x==a)
	{
		printf("\nno is armstrong");
		
	}
	else
	{
		printf("\nno is not a armstrong");
		
	}
}
