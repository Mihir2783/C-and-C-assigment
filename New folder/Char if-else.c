#include<stdio.h>
main()
{
	char c;
	printf("Enter the Character :");
	scanf("%c",&c);
	
	if(c=='a'|| c=='e'|| c=='i'|| c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
	{
		printf("\nVowel");
		
	}
	else
	{
		printf("\nConstant");
	}
}