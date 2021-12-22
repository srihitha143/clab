#include<stdio.h>
int main()
{
  int  a,b,c;
  char OP;
  printf("enter character");
  scanf("%c",&OP);
  printf("enter a variable");
  scanf("%d",&a);
  printf("enter b variable");
  scanf("%d",&b);
  switch(OP)
{
	case '+':
		c=a+b;
		printf("%d",c);
		break;
		case'-':
			c=a-b;
			printf("%d",c);
			break;
			case'/':
				c=a/b;
				printf("%d",c);
				break;
				case'*':
					c=a*b;
					printf("%d",c);
					break;
			
  }  
}
