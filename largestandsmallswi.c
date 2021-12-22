#include<stdio.h>
main()
{
	int a,b,c,n;
	printf("enter 0: find largest, 1: find smallest");
	scanf("%d", &n);
	printf("enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	switch(n)
	{
		case 0: if (a>b && a>c)
				printf("%d is largest",a);
				else if(b>c)
				printf("%d is largest",b);
				else
				printf("%d is largest",c);
		break;
		case 1: if (a<b && a<c)
				printf("%d is smallest",a);
				else if(b<c)
				printf("%d is smallest",b);
				else
				printf("%d is smallest",c);
		break;
			
	}
}
