#include<stdio.h>
int main()
{
	int i, sum=0, sub=0;
	printf("Odd\t\tEven");	
	for(i=1; i<=20; i++)
	{
		if(i%2==0)
		{
			printf("\t\t%d", i);
			sum=sum+i;
		}
		else
		{
			printf("\n%d", i);
			sub=sub+i;
		}
	}
	printf("\n-------------------");
	printf("\nSum:%d\t\tSum:%d",sub, sum);	
	return 0;
}