#include <stdio.h>
main()
{
	int m1,m2,m3,m4,m5,sum,per;
	printf("Enter the marks m1:");
	scanf("%d",&m1);
	printf("Enter the marks m2:");
	scanf("%d",&m2);
	printf("Enter the marks m3:");
	scanf("%d",&m3);
	printf("Enter the marks m4:");
	scanf("%d",&m4);
	printf("Enter the marks m5:");
	scanf("%d",&m5);
	
	sum=m1+m2+m3+m4+m5;
	printf("\nTotal Marks : %d",sum);
	per=sum/5;
	printf("\n Avg. Per% : %d",per);
	
}