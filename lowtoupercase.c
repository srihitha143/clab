#include<stdio.h>
int main()
{
	char c;
	printf("enter a character");
	scanf("%c",&c);
	printf("entered character is %c",c);
	if(c>=65&&c<=90)
{
	c=c+32;
	printf("\n converted character is:%c",c);
	}
	else
	{
		printf("\n converted character is:%c",c);
		}	
}
