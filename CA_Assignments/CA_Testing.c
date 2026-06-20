#include<stdio.h>
#include<string.h>

float inventoryMoney = 100000;


void inputService(char *service) {

    printf("Enter the service number\n");
    printf("1. Fine Payment(per overdue day)\n");
    printf("2. Book  Reservation \n");
    printf("3. Membership Renewal\n");
    printf("4. Lost Library Card Replacement \n");

    printf("0. Exit\n");



    scanf("\n%c",service);



}


void finePayment(int overdueDates,float *totalFee) {
    *totalFee = overdueDates*20;
}

void membershipRenewal(float *totalFee) {
    char role;
    float discount;
    printf("Are you an Undergraduate? y or n\n");
    scanf("\n%c",&role);

    if (role=='y') {
        discount = 0.15;
    }else {
        discount = 0.1;
    }

    *totalFee = 500-(500*discount);

}

void bookReservations(float *totalFee) {
    char role;
    float discount;
    printf("Are you an Undergraduate? y or n\n");
    scanf("\n%c",&role);

    if (role=='y') {
        discount = 0.15;
    }else {
        discount = 0.1;
    }

    *totalFee = 100-(100*discount);
}

void transactionProcessing(float totalFee) {
    extern float inventoryMoney;
    int note;
    printf("Enter the Note (Only one note should be entered):\n");
    scanf("%d",&note);

    if (totalFee<=note) {
        printf("About to complete transaction...");
        if (totalFee==note) {

            printf("Transaction successfully completed!");
        }else {
            //change();
        }
        inventoryMoney-=totalFee;

    }else {
        printf("Insufficient Money");

    }


}





void main() {
    char service;
    int overdueDates;
    float totalFee;


    void inputService(char *);

    while (1) {
        inputService(&service);


        if (service=='1') {
            printf("Enter overdue dates:\n");
            scanf("%d",&overdueDates);
            finePayment(overdueDates,&totalFee);
            printf("%.2f\n",totalFee);

        }else if (service=='2') {
            bookReservations(&totalFee);
            printf("%.2f\n",totalFee);

        }else if (service=='3') {
            membershipRenewal(&totalFee);
            printf("%.2f\n",totalFee);

        }else if (service=='4') {
            //cardReplacement();

        }else if (service=='0') {
            break;
        }
        else {
            printf("Service Unavailable\n");
            break;
        }

        //Transaction processing
        transactionProcessing(totalFee);




    }

    printf("You broke the loop");



}