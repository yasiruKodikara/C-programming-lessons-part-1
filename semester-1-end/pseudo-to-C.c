#include<stdio.h>

int main() {
    int balance = 10000;
    int attempts = 0;
    int pin_correct = 0;
    int pin;
    char choice;
    int amount;

    while((attempts<3)&&(pin_correct==0)){
        printf("Enter PIN:");
        scanf("%d",&pin);


        if(pin==1234){
            pin_correct = 1;
        }else
        {
            printf("Incorrect PIN\n");
            attempts++;
        }
    }

    if(pin_correct==0){
        printf("Card blocked. Try again later.");
    }else {
        do {
            printf("ATM Menu\n");
            printf("1. Check Balance\n2. Withdraw Cash\n3. Deposit Cash\n4. Exit");
            printf("\nEnter your choice:");
            scanf("\n%c",&choice);

            switch(choice)
            {
                case('1'):
                    printf("Your balance is: %d",balance);
                    break;

                case('2'):
                    printf("Enteramount to withdraw:");
                    scanf("%d",&amount);
                    if(amount<=balance)
                    {
                        balance-=amount;
                        printf("Withdrawal successful. Remaining balance:%d",balance);
                    }else
                    {
                        printf("Insufficient balance");
                    }
                    break;
                case('3'):
                    printf("Enter amount to deposit:");
                    scanf("%d",&amount);
                    balance+=amount;
                    printf("Deposit successfull.New balance:%d",balance);
                    break;
                case('4'):
                    printf("Thank you! Exiting...");
                    break;
                default:

                    printf("Invalid choice");

            }
        }while(choice==4);
    }

    return 0;

}
