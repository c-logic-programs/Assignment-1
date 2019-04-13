//9. Accept one number and return that number by subtracting 5 from it.

#include<stdio.h>

int Sub(int iNo)
{
	return iNo - 5;
}

int main()
{
	int iNo = 0;
	printf("Enter the number\n");
	scanf("%d",&iNo);

	printf("Sub is %d \n",Sub(iNo));
	return 0;
}
