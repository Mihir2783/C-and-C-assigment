#include<stdio.h>
main()
{
	int age;
	printf("Enter the age:");
	scanf("%d",&age);
	
	if (age >=19)
	{
		printf("\nYou are elegible for Votting!");
	}
	else
	{
		printf("\Sorry you are not elegible for votting!");
	}
}