#include<stdio.h>
main()
{
	int num;
	printf("Enter the num:");
	scanf("%d",&num);
	
	if (num%2== 0)
	{
		printf("\nOdd value!");
	}
	else
	{
		printf("\nEven value");
	}
}