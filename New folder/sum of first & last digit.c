#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,f,l;
	printf("enter any number to find sum of first & last digit =");
	scanf("%d",&n);
	l=n%10;
	f=n;
	while(n>=10)
	{
		n=n/10;
	}
	f=n;
	sum=f+l;
	printf("sum of first & last digit is=%d",sum);
}