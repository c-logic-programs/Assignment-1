/*
3. Program to print 5 to 1 numbers on screen.
______ Display()
{
____ i = 5;
}
while( _____ )
{
printf(“%d”,i);
i—;
}
*/

#include<stdio.h>

void Display()
{
	int i = 5;
	while(i != 0)
	{
		printf("%d \n",i);
		i--;
	}
}

int main()
{
	Display();
}
