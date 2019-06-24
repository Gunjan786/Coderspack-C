#include<stdio.h>
main()
{
	int a[5],i=0,c=0;
	printf("enter the list of values:");
	//reading list of values
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	//finding the largest no
	c=a[0];
	for(i=0;i<5;i++)
	{
	if(c>a[i+1])
	{
		c=c;
	}
	else
	{
		c=a[i+1];
	}
	}
	printf("\nthe largest no is: %d",c);
//finding the smallest no
for(i=0;i<5;i++)
{
	if(c<a[i+1])
	{
		c=c;
	}
	else
	{
		c=a[i+1];
	}
}
printf("\nsmallest no is :%d",c);
}
