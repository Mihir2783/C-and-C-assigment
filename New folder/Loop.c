#include<stdio.h>
main()
{
	

	int i;
	printf("\nEnter a number");
	scanf("%d",&i);
	while(i!=0)
	{
		printf("\nI = %d", i);
		printf("\nEnter a number:");
		scanf("%d",&i);
		
	}
		printf("nYou entered Zero.");
	do
	{
		printf("\nEnter a number: ");
		scanf("%d",&i);
		printf("\nI = %d",i);
	}
	while(i!=0);
	printf("\nYou Enetered in Zero");
}