#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter The Age:");
	scanf("%d",&n);
	if(n>=18)
		{
		printf("\n You can apply for license");
			
		}
		else
		{
			printf("\nYou cannot apply for license");
		}
		return 0;
}