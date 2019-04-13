//10. Accept on number from user if number is less than 10 then print “Hello”
//otherwise print “Demo”.

#include<stdio.h>

void Display(int iNo)
{	
	if(iNo < 10)
	{
		printf("Hello \n");
		return;
	}
	printf("Demo \n");	
}

int main()
{
	int iNo = 0;
	printf("Enter the number\n");
	scanf("%d",&iNo);
		
	Display(iNo);
}
