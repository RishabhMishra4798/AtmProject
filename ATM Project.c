#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
unsigned long amount=10000, deposit, withdraw;
int option, pin, x, var;
char transaction ='y';
 
void main()
{
	printf("\n                      Welcome to ATM Service                         \n\n\n");
	while (pin != 1234)
	{
		printf("Enter your pin..");
		scanf("%d", &pin);
		if (pin != 1234)
		printf("Please Enter Your Valid Pin Number\n\n");
	}
	do
	{
		printf("\n----------------------Select Your Choice----------------------\n\n");
		printf("1. Balance Enquiry          ");
		printf("\t            2. Cash Withdraw\n\n");
		printf("\n3. Deposit Cash\t         ");
		printf("                   4. Exit\n\n");
		printf("\n--------------------------------------------------------------\n\n\n");
		printf("Note: Initialy, Your Deposited Ammount is 10000. \n\n");
		printf("Enter your choice: ");
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			printf("\n Your Balance is Rs : %lu ", amount);
			break;
		case 2:
			printf("\n1. From Current\n");
			printf("2. From Saving\n");
			printf("\nSelect your choice.. ");
			scanf("%d",&x);
			printf("\n Enter amount to withdraw.. ");
			scanf("%lu", &withdraw);
			if (withdraw % 100 != 0)
			{
				printf("\n Please enter amount in multiple of 100 and more than 200 ");
			}
			else if (withdraw >(amount - 200))
			{
				printf("\n Insufficient Balance. ");
			}
			
			else
			{
				amount = amount - withdraw;
				printf("\n\n Please collect your cash.");
				printf("\n Now, Your current balance is : %lu", amount);
			}
			break;
		case 3:
			printf("\n Enter the ammount you want to deposit.. ");
			scanf("%lu", &deposit);
                        amount = amount + deposit;
			printf("Your current ammount balance is : %lu", amount);
			break;
		case 4:
			printf("\n Thanks for using our service.");
			exit(0);
			break;
		default:
			printf("\n Invalid choice \nPlease try again..");
		}
		printf("\n\n\n Do you want to continue ?(y/n): \n");
		
		fflush(stdin);
		
		scanf("%c", &transaction);
		if (transaction == 'n'|| transaction == 'N')
                    var = 1;
	} while (!var);
	printf("\n\n Thanks for using our ATM Service.");
	getch();
}
