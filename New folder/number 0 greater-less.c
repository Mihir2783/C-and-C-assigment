#include<stdio.h>
main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	
	if (num>0)
	{
		printf("\nPositive number");
	}
	else
		printf("\nNegative number");
}