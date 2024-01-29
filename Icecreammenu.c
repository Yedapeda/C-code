#include<stdio.h>
int main()
{
	int order , qty, total=0, sub=0;
	float dis ;
	printf("-----Menu-----");
	printf("\n1] Chocolate Ice Cream	:30\n2] Vanilla Ice Cream	:20\n");
	printf("3]  Pan Masala Ice Cream:30\n4] Pista Ice Cream	:25\n5] Exit ");
	printf("\nEnter the Order Number:");
	scanf("%d", &order );
	if(order>=1 && order <=4)
	{
		printf("Enter The Quantity:");
		scanf("%d", &qty);
		if(order==1)
		{
			printf("Your Order is Chocolate Ice-cream with price 30rs.");
			total=30*qty;
			printf("\nYour Total Bill:%d", total);
		}
		else if(order==2)
		{
			printf("Your Order is Vanilla Ice-cream with price 30rs.");
			total=30*qty;
			printf("\nYour Total Bill:%d", total);
		}
		else if(order==3)
		{
			printf("Your Order is Pan Masala Ice-cream with price 30rs.");
			total=30*qty;
			printf("\nYour Total Bill:%d", total);
		}
		else 
		{
			printf("Your Order is Pista Ice-cream with price 30rs.");
			total=30*qty;
			printf("\nYour Total Bill:%d", total);
		}
		if(total>=200)
		{
			dis=total*0.05;
			printf("\nYour Discount :%f", dis);
			printf("\nYour Net Bill :%f", total-dis);
		}
		else
		{
			sub=200-total;
			printf("\nPurchase %d for more discount.", sub );
		}
		
	}
	else if (order ==5)
	{
		printf("Exited!\nVisit Again...!");
	}
	else
	{
		printf("\nInvail Order Number.");
	}
	return 0;
}