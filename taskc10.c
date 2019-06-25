#include<stdio.h>
main()
{
	int i=0,j=0,n=0,choice=0;
	printf("click 1 to print pyramid:");
	scanf("%d",&choice);
	printf("\nenter the no of rows:");
	scanf("%d",&n);
	if(choice==1)
	{
		for(i=1;i<=n;i++)
			{
			for(j=1;j<=i;j++){
				printf("%d",j);
			}
			printf("\n");
		}
	}
	else{
		exit(0);
	}
}
