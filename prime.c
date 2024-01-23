#include<stdio.h>
int main()
{
	int flag=1, n, i;
	printf("\nEnter Any No.:");
	scanf("%d", &n);
	if(n==1)
	{
		flag=1;
		
	}
	else
	{
		for(i=2; i<=n-1; i++)
		{
			if(n%i==0)
			{
				flag=0;
				break;
			}
		}
	}
	if(flag==1)
	{
		printf("\n Prime NO.");
	}
	else
	{
		printf("\nNon Prime No.");
	}
	return 0;
}
