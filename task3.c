#include<stdio.h>
main()
{
	int eng=0,maths=0,science=0,sum=0;
	float average=0;
	//reading the value of marks from user
	printf("enter the marks in english:");
	scanf("%d",&eng);
	printf("enter the marks in maths:");
	scanf("%d",&maths);
	printf("enter the marks in science:");
	scanf("%d",&science);
	//calculating the sum and average
	sum=eng+maths+science;
	average=(float)sum/3;
	//displaying the sum and average
	printf("sum of the marks is : %d",sum);
	printf("\naverage of the marks is: %f",average);
}
