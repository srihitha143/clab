#include<stdio.h>
int main()
{
	int a,b,rows;
	printf("enter no of rows");
	scanf("%d",& rows);
	for (a=1;a<=rows;a++)
	{
		for (b=1;b<=a;b++)
		{
			printf("1 \t");
		}
		printf("\n");
	}
}
