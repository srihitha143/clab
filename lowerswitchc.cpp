#include<stdio.h>
main()
{
	char ch;
	printf("enter a character");
	scanf("%c",&ch);
	printf("entered character is %c",ch);
	switch(ch)
	{
		case 'A'...'Z':
		ch=ch+32;
		printf("\n converted character is %c",ch);
		break;
		case 'a'...'z':
		ch=ch-32;
		printf("\n converted character is %c",ch);	
		break;
		case '0'...'9':
			printf("\n is a number",ch);
	}
}
