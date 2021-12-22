#include<stdio.h>
 main()
{
	int a,b,rem;
	printf("enter divident");
	scanf("%d",&a);
	printf("enter divisor");
	scanf("%d",&b);
	rem=a-(a/b)*b;
	printf(" the rem is %d",rem);
}
