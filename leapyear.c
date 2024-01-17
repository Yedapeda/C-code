//C Program for chekcing year is leap or not .
// Take year 			input
//Check it 				process 		output 
#include<stdio.h>
int main()
{
	int year;
	
	printf("\nEnter Year :");
	scanf("%d", &year);
	
	if(year%4==0)
	{
		printf("\nEntered year is leap year");
		
	}
	else
	{
		printf("\n Entered  year is not leap year ");
	}
	
	return 0;
}