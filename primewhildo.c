#include<stdio.h>
int main()
{
	int n,i=1,count=0;
	scanf("%d",&n);
    do
	{
		if(n%i==0)
		count++;
		i++;
	}while(i<=n);
	if(count<=2)
	printf("%d it is a prime number",n);
	else
	printf("%d is not a prime number",n);
}
