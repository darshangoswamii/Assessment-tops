#include<stdio.h>
int main()
{
	int num,num2,pizza=180,burger=100,dosa=120,idali=50,amount,total=0;
	char ch;
	again:
		
	printf("\n1.Pizza		price=180rs/pcs");
	printf("\n2.Burger	price=100rs/pcs");
	printf("\n3.Dosa		price=120rs/pcs");
	printf("\n4.Idali		price=50rs/pcs");
	printf("\nPlease enter your choose...:");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1:
			printf("\nYou have selected pizza.");
		break;
		case 2:
			printf("\nYou have selected Burger.");
		break;
		case 3:
			printf("\nYou have selected Dosa.");
		break;
		case 4:
			printf("\nYou have selected Idali.");
		break;
		default:
            printf("\nInvalid choice.");
        goto end;
	}
	printf("\nEnter the quantity :");
	scanf("%d",&num2);
	switch(num)
	{
		case 1:
			amount = pizza * num2;
			printf("\nAmount : %d",amount);
			total = total + amount;
			printf("\nTotal amount is = %d",total);
		break;
		case 2:
			amount = burger * num2;
			printf("\nAmount : %d",amount);
			total = total + amount;
			printf("\nTotal amount is = %d",total);
		break;
		case 3:
			amount = dosa * num2;
			printf("\nAmount : &d",amount);
			total = total + amount;
			printf("\nTotal amount is = %d",total);
		break;
		case 4:
			amount = idali * num2;
			printf("\nAmount : &d ",amount);
			total = total + amount;
			printf("\nTotal amount is = %d",total);
		break;
	}
	printf("\nDo you want place more orders? y & n :");
	scanf(" %c",&ch);
	if( ch=='y' || ch=='Y')
	{
		goto again;
	}
	else
	{
		printf("\n thank you");
	}
	end:
	
	return 0;
}
