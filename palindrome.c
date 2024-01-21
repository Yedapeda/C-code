//This code is for making number palindrome 
// palindrome logic = number=123 then palindrome will 321 
// It means palindrome number are reverse number 
#include<stdio.h>
int main()
{
	int num, r; 
	printf("\nEnter Any Number :");
	scanf("%d", &num);
	printf("\nPalindrome:");
	while(num>0)
	{
		r=num%10;
		printf("%d", r);
		num=num/10;
	}
	return 0;
}
