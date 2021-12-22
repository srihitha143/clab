#include<stdio.h>
main()
{
	int i=1,n,count=0;
	printf("\n the given number");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		count++;
		i++;
	}
	if(count<=2)
	printf("\n it is a prime number");
	else
	printf("\n is not a prime number");
}
