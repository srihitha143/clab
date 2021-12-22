#include<stdio.h>
main()
{
	char ch;
	printf("enter any character \n");
	scanf("%c",&ch);
	switch (ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')
	{
		case 1:
			printf("entered character is character");
			break;
	case 0:
	switch (ch>='0'&&ch<='9')
	{
		case 1:
			printf("entered character is number");
			break;
	}
    }
	switch (ch='!','@','#','$','%')
	{
		case 2:
			printf("entered character is special character");
			break;
	}
}
