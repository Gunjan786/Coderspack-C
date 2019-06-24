#include<stdio.h>
main(){
	int a=0,c=0,i=0;
	printf("enter the value of integer:");
	scanf("%d",&a);
	for(i=1;i<=10;i++)
	{
		c=a*i;
		printf("\n%d * %d = %d",a,i,c);
	}
}
