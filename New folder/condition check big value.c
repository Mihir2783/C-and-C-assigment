#include<stdio.h>
main()
{
	int m,z,r;
	printf("Enter the value of m:");
	scanf("%d",&m);
	printf("Enter the value of z:");
	scanf("%d",&z);
	printf("Enter the value of r:");
	scanf("%d",&r);
	
	(m>z)? ((m>r)?printf("\nm is larger number"):printf("\nz is large number")):
		((z>r)?printf("\nz is larger number"):printf("\nr is larger number"));
	
}