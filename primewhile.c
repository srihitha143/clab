#include<stdio.h>
main()
{
	int i=1,n,count=0;
	printf(" the given number");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		count++;
		i++;
	}
	if(count<=2)
	printf("%d it is a prime number",n);
	else
	printf("%d is not a prime number",n);
}
