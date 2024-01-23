//This coding is for Checking age for drving licence
#include<stdio.h>
int main()
{
	int age;
	char gender;
	printf("\nEnter Your Gender (m/f):");
	scanf("%c",&gender);
	printf("\nEnter Your Age:");
	scanf("%d",&age);
	
	
	if(gender=='m')
	{
		if(age>=18) 
		{
			printf("\nYour eligible for license");
		}
		else
		{
			printf("\nYour  Not eligible for license:");
		}
	}
	else
	{
		if(age>=21)
		{
			printf("\nYour eligible for license");
			
		}
		else 
		{
			printf("\nYour Are Not eligible for license");
		}
	}
	
	
	return 0;
}