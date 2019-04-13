//6. Accept one number from user and print that number of * on screen using while loop.

#include<stdio.h>

void Display(int iNo)
{
	while(iNo > 0)
	{
		printf("%d => *\n",iNo);
		iNo--;
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
