#include<stdio.h>
main(){
	int n=0,c=0;
	printf("enter a value of integer:");
	scanf("%d",&n);
	printf("click 1 to see the pyramid:");
	scanf("%d",&c);
	if(c==1){
		//pyramid
	while(n>0)
	{
		printf("\n%d",n);
		n=n/10;
	}
}
else
{
	printf("\ninvalid input");
}
}
