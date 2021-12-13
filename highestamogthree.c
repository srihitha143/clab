#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter first number:");
	scanf("%d",&a);
	printf("enter second number:");
	scanf("%d",&b);
	printf("enter third number:");
	scanf("%d",&c);
	switch (a>b && a>c)
	{
		case 1:
			printf("%d is maximum",a);
			break;
			case 0: switch(b>c)
			{
				case 1:
					printf("%d is maximum",b);
				case 0:
				printf("%d is maximum",c);	
			}
	}

	
}
