/*
1.Program to divide two numbers
____ Divide(int iNo1, int iNo2)
{
int iAns = 0;
if(ino2 ______)
{
return -1;
}
iAns = iNo1 / iNo2;
return ______;
}
*/

#include<stdio.h>

int Divide(int iNo1,int iNo2)
{
	int iAns = 0;
	
	if(iNo2 == 0)
	{
		return -1;
	}
	
	iAns = iNo1 / iNo2;
	return iAns;

}

int main()
{
	int ino1,ino2 = 0;

	printf("Enter the number \n");
	scanf("%d",&ino1);
	scanf("%d",&ino2);
	
	int iAns = Divide(ino1,ino2);

	if(iAns == -1)
	{
		printf("The answer is not defined");
	}
	else
	{
		printf("The Division is %d ",iAns);
	}
	

return 0;
}
