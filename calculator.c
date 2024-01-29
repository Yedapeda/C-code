#include<stdio.h>
int main()
{
	int operation, a, b;
	printf("------Calculator-------");
	printf("\n1]Addition \n2]Subtraction\n3]Division \n4]Multiplication");
	printf("\nEnter the Operation Number:");
	scanf("%d", &operation);

	if(operation >=1 && operation <=4)
	{
		printf("\nEnter Any Two Number:");
		scanf("%d%d", &a ,&b);
		
		switch (operation)
		{
			case 1: printf("\n Addition :%d", a+b);
				break;
			case 2: printf("\n Subtraction :%d", a-b);
				break;
			case 3: printf("\n Division :%d", a/b);
				break;
			default: printf("\n Multiplication :%d", a*b);
				break;
		}
	}
	else
	{
		printf("\nYour Enter Operation Number is Invaild.");
	}
	
	
	
	return 0;
}