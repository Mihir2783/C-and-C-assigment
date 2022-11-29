
#include<stdio.h>
main()
{
   	 int a,b,ans;
   	 char n;
	 printf("\nEnter A:");
	 scanf("%d",&a);
	 printf("\nEnter B:");
	 scanf("%d",&b);
	 
	 printf("\nEnter number what you want in Output: \n\n");
	 printf("a.Addition \nb.Subtraction \nc.Multiplication \nd.Division");
	 fflush(stdin);
	 scanf("%c",&n);
	 
	 switch(n)
	 {
	 	case 'a':
	 		ans=a+b;
	 		printf("\nAddition =%d",ans);
	 		break;
	 	case 'b':
	 		ans=a-b;
	 		printf("\nSubtraction =%d",ans);
	 		break;
	 	case 'c':
	 		ans=a*b;
	 		printf("\nMultiplication  =%d",ans);
	 		break;
	 	case 'd':
	 		ans=a/b;
	 		printf("\nDivision =%d",ans);
	 		break;
			 
		  
	default:
			printf("\nInvalid Data,Plz Try Again");
	}
}
		