#include<stdio.h>
main()
{
	char c;
	printf("enter a character");
	scanf("%c",&c);
	printf("\nenterd character is %c",c);
	printf("\nits ASCII value is %d",c);
	
	printf("\nent another character");
	fflush(stdin);
	c=getchar();
	printf("\nentered character is");
	putchar(c);
	printf("\nits ASCII value is %d",c);
	
}
