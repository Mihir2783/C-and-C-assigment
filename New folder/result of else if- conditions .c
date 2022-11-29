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
	printf("\nPercentage% : %d",per);
	
	if(per>75)
	{
		printf("\nDistinction");
		
	}
	else if(per>60)
	{
		printf("nFirst Class");
		
	}
	else if(per>50)
	{
		printf("nsecond Class");
		
	}
	else if(per>45)
	{
		printf("nPass Class");
		
	}
	else
	{
		printf("\nSorry,Better luck for next time");
	}
}