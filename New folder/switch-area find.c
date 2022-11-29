#include<stdio.h>
main()
{
   	 int a,b,side,ans,area,length,width;
   	 char n;
	 printf("\nEnter A:");
	 scanf("%d",&a);
	 printf("\nEnter B:");
	 scanf("%d",&b);
	 
	 printf("\nEnter number what you want in Output: \n\n");
	 printf("a.Square area \nb.Ractangle area \nc.Triangle area \nd.Circle area");
	 fflush(stdin);
	 scanf("%c",&n);
	 
	 switch(n)
	 {
		printf("\nEnter the Length of Side : ");
	    scanf("%d", &side);
	    area = side * side;
	    printf("\nArea of Square : %d", area);
	 	break;
	 	case 'b':
		printf("\nEnter the Length of Rectangle : ");
	    scanf("%d", &length);
	    printf("\nEnter the width of Rectangle : ");
	    scanf("%d", &width);
	    area = length * width;
	    printf("\nArea of Rectangle : %d", area);
	 	break;
	 	
		  
	default:
			printf("\nInvalid Data,Plz Try Again");
	}
}
		