//4. Accept one number and check whether is is divisible by 5 or not.

#include<stdio.h>

typedef int BOOL;
#define FALSE 0
#define TRUE 1

BOOL Check(int iNo)
{
	BOOL bRet = TRUE;
	if(iNo % 5 != 0)
	{
		bRet = FALSE;
	}
	return bRet;
}

int main()
{
	int iNo = 0;
	printf("Enter the number");
	scanf("%d",&iNo);

	BOOL bRet = Check(iNo);
	
	if(bRet)
	{
		printf("%d is divisible by 5",iNo);
	}
	else
	{
		printf("%d is not divisible by 5",iNo);
	}
	
	return 0;
}
