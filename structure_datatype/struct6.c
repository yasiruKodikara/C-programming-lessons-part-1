#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
};

struct account {
    int acct_no;
    char acct_type;
    char name[50];
    float balance;
    struct date lastpayment;
};
void main() {
    struct account oldcustomer,customer[100];
    int payment = 0;
    char account_type;

    printf("enter the old customer account number\n");
    scanf("%d", &oldcustomer.acct_no);


    printf("\nEnter the account type:\n");
    scanf("\n %c", &account_type);
    oldcustomer.acct_type = account_type;

    printf("Enter the payment: \n");
    scanf("\n %d", &payment);

    oldcustomer.balance = 10;
    printf("old customer's balance %.2f\n",oldcustomer.balance);

    oldcustomer.balance = oldcustomer.balance - payment;
    printf("old customer's balance %.2f\n",oldcustomer.balance);

    char actype = oldcustomer.acct_type;
    if(actype == 'P') {
        printf("preferred account:%d \n",oldcustomer.acct_no);
    }else {
        printf("Regular account:%d \n",oldcustomer.acct_no);
    }
}