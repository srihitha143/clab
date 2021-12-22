#include<stdio.h>
int main()
{
	int a,k;
	printf("enter a value");
	scanf("%d",&a);
	k=a%2;
	switch(k)
	{
		case 0:
			printf("even number");
			break;
			case 1:
				printf("odd number");
				break;
	}
}
