#include<stdio.h>
main()
{
	int radius,area;
	printf("\nEnter the radius of Circle : ");
    scanf("%d", &radius);
    area = 3.14 * radius * radius;
    printf("\nArea of Circle : %d", area);
}