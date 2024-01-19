//This coding is for identifly of odd and even number 
// First We will take input from user 'n' .
#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter the Number:");
	scanf("%d", &num);
	if(num%2==0)
	{
		printf("\nYour Number is Even:%d", num);
	}
	else
	{
		printf("\nYour Number is Odd:%d", num);
	}
	return 0;
}