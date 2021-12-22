#include<stdio.h>
main()
{
	char ch;
	printf("enter any character \n");
	scanf("%c",&ch);
	if (ch>='0'&& ch<='9')
	{
		printf("the character is number \n");
	}
	else if (ch>='A' && ch<='Z')
	{
		printf("the character is alphabet \n");
	}
	else if (ch>='a' && ch<='z')
	{
        printf("the character is alphabet \n");
    }
    else if (ch='!','@','#','$','~','^','%','*')
    {
    	printf("the character is special character \n");
	}
}
