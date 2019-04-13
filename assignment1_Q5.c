//5. Accept one number from user and print that number of * on screen using for loop.

#include<stdio.h>

void Display(int iNo)
{
	for(int i = 0; i < iNo; i++)
	{
		printf("*\n");
	}
}

int main()
{
	int iNo = 0;
	printf("Enter the number\n");
	scanf("%d",&iNo);
	
	Display(iNo);
	
	return 0;
}
