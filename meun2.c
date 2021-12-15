#include<stdio.h>
main()
{
	char k;
	int q;
	printf("b:burger,f:french fries,s:sandwich,p:pizza");
	scanf("%c",&k);
	switch (k)
	{
		case 'b':
			printf("entered for burger");
			printf("enter q");
			scanf("%d",&q);
			printf("bill=%d\n",q*200);
			break;
		case 'p':
		     printf("entered for pizza");
			 printf("enter q");
			 scanf("%d",&q);
			 printf("bill=%d\n",q*500);
			 break;
		case 's':
		    printf("entered for sandwich");
			printf("enter q");
			scanf("%d",&q);
			printf("bill=%d\n",q*150);
			break;
		case 'f':
		    printf("entered for french fries");
			printf("enter quantity");
			scanf("%d",&q);
			printf("bill=%d\n",q*50);
			break;		 	
	    default :
	    	printf("order not availble");
	}
}
