//6. Accept one number from user and print that number of * on screen using while loop.

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0; 
	while(iCnt < iNo)
	{
		printf("*\n");
		iCnt++;
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
