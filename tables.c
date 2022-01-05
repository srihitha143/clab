#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	scanf("%d",&n);
	while(i<=10)
	{
		printf("%d*%d=%\n",n,i);
		sum=n*i;
	    i++;
	}
	printf("%d",sum);
}
