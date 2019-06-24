#include<stdio.h.>
main()
{
	int a=0,i=0,f=1;
	printf("enter a value of integer:");
	scanf("%d",&a);
	//calculating factorial
	for(i=a;i>0;i--)
	{
		f=f*i;
	}
	printf("factorial is %d",f);
}
