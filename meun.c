#include<stdio.h>
main()
{
	char k;
	int quantity;
	printf("b:burger,f:french fries,s:sandwich,p:pizza");
	scanf("%c",&k);
	switch (k)
	{
		case 'b':
			printf("entered for burger");
			printf("enter quantity");
			scanf("%d",&quantity);
			printf("bill=%d\n",quantity*200);
			break;
		case 'p':
		     printf("entered for pizza");
			 printf("enter quantity");
			 scanf("%d",&quantity);
			 printf("bill=%d\n",quantity*500);
			 break;
		case 's':
		    printf("entered for sandwich");
			printf("enter quantity");
			scanf("%d",&quantity);
			printf("bill=%d\n",quantity*150);
			break;
		case 'f':
		    printf("entered for french fries");
			printf("enter quantity");
			scanf("%d",&quantity);
			printf("bill=%d\n",quantity*50);
			break;		 	
	    default :
	    	printf("order not availble");
	}
}
