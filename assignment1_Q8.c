//8. Accept one character from user and display that character on screen.

#include<stdio.h>

void DispChar(char ch)
{
	printf("\ncharacter is %c\n",ch);
}

int main()
{
	char ch = 99;
	DispChar(ch);
	printf("Enter the character \n");
	scanf("%c",&ch);

	DispChar(ch);

	return 0;
}
