#include<stdio.h>
main()
{
	printf("the first 10 natural numbers");
	int i =1,n,sum=0;
	scanf("%d",&n);
	while (i<=n)
	{
		scanf("%d",&n);
		 i=i+1;
		sum=sum+i;
		printf("%d",i);
	}
	printf("sum is %d",sum);
	sum=sum+i;
	
	
}
