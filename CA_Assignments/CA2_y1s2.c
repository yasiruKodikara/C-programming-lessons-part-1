#include <stdbool.h>
#include<stdio.h>
#include<string.h>

//Prices
#define FINE_PAY 20
#define BOOK_RES 100
#define MEM_RENEW 500
#define LOST_CARD_REP 250

//Discounts
#define UG_DISCOUNT 0.15
#define G_DISCOUNT 0.1

//Global Variables
int successfullTransactionCount = 0;
int numberOfBooks;
bool transactionStatus;
int service_1_rev = 0;
int service_2_rev = 0;
int service_3_rev = 0;
int service_4_rev = 0;

//Inventory
int reservationSlotsAvailable = 3;
int renewalsAvailable = 3;
int replacementCardsAvailable= 10;
float inventoryMoney = 100000;

//Note Inventory
int change500 = 5;
int change200 = 5;
int change100 = 5;
int change50 = 5;
int change20 = 5;



//Service Input
void inputService(char *service) {

    printf("\n-----------------------SERVICES LIST----------------------\n");
    printf("1. Fine Payment(per overdue day)\n");
    printf("2. Book  Reservation \n");
    printf("3. Membership Renewal\n");
    printf("4. Lost Library Card Replacement \n");

    printf("0. Exit\n");

    printf("+--------------------------------------------------------\n");

    printf("Enter the service number:");


    scanf("\n%c",service);



}


//(Service 1) Fine Payment
int finePayment(float *totalFee) {


    int overdueDates;
    printf("Enter overdue dates:\n");
    scanf("%d",&overdueDates);

    if (overdueDates>50 || overdueDates<=0) {
        printf("Number of refinable overdue dates were exceeded! \n");
        return 0;

    }else {

        *totalFee = overdueDates*FINE_PAY;

        return 1;
    }

}

//(Service 2) Book Reservations
int bookReservations(float *totalFee) {

    int numberOfBooks;
    float discount;
    float discountGenerator();

    if (reservationSlotsAvailable > 0) {

        printf("\nThere are only %d slots available!\n", reservationSlotsAvailable);
        printf("Enter the number of books (Max 3): ");
        scanf("%d", &numberOfBooks);

        if (numberOfBooks > 3 || numberOfBooks <= 0) {
            printf("Invalid Number of Books\n");
            return 0;
        }

        if (numberOfBooks > reservationSlotsAvailable) {
            printf("Not enough reservation slots!\n");
            return 0;
        }

        discount = discountGenerator();

        *totalFee = BOOK_RES * numberOfBooks;
        *totalFee = *totalFee - (*totalFee * discount);

        return numberOfBooks;   // return quantity for inventory update
    }

    printf("There are no slots available. Service Unavailable!\n");
    return 0;
}

//(Service 3) Membership Renewal
void membershipRenewal(float *totalFee) {

    float discountGenerator(void);
    float discount = discountGenerator();

    *totalFee = MEM_RENEW-(MEM_RENEW*discount);


}

//(Service 4) Lost Card Replacement
void cardReplacement() {

    printf("You have to pay LKR  %d",LOST_CARD_REP);

    void transactionProcessing(float);

    transactionProcessing(LOST_CARD_REP);

}


//Discounts generator
float discountGenerator() {
    char role;
    float discount;
    printf("Are you an Undergraduate? y or n\n");
    scanf("\n%c",&role);

    if (role=='y') {
        printf("You have %.2f discount!",UG_DISCOUNT);
        discount = UG_DISCOUNT;
    }else {
        discount = G_DISCOUNT;
        printf("You have %.2f discount!",G_DISCOUNT);
    }

    return discount;
}



//Transactions

//Change

int Change(float totalFee,int note) {
    //Change allowed only Rs. 500, Rs. 200, Rs. 100, Rs. 50 and Rs. 20
    extern int change500;
    extern int change200;
    extern int change100;
    extern int change50;
    extern int change20;

    int change;
    int remaining;
    int use500 = 0, use200 = 0, use100 = 0, use50 = 0, use20 = 0;

    change = note-totalFee;
    remaining = change;




    printf("Change is LKR %d\n",change);



    if (remaining>=500  && change500>0) {
        use500 = remaining/500;

        if (use500>change500) use500 = change500;
        remaining -= use500*500;
    }

    if (remaining>=200 && change200>0) {

        use200 = remaining/200;
        if (use200>change200) use200 = change200;
        remaining -= use200*200;
    }

    if (remaining>=100 && change100>0) {

        use100 = remaining/100;
        if (use100>change100) use100 = change100;
        remaining -= use100*100;
     }

    if (remaining>= 50 && change50> 0) {

        use50 = remaining/50;
        if (use50>change50) use50 = change50;
        remaining -= use50*50;




    }

    if (remaining>= 20 && change20> 0) {

        use20 = remaining/20;

        if (use20>change20) use20 = change20;


        remaining -= use20*20;
      }


    if (remaining!=0) {

        printf("Unable to provide exact change with the notes available!\n");


        return 0;
        }





    change500 -= use500;
    change200 -= use200;
    change100 -= use100;
    change50 -= use50;
    change20 -= use20;


    if (use500) printf("500x%d\n",use500);
    if (use200) printf("200x%d\n",use200);
    if (use100) printf("100x%d\n",use100);
    if (use50) printf("50x%d\n",use50);
    if (use20) printf("20x%d\n",use20);

    return 1;
}


//Transaction Processing
void transactionProcessing(float totalFee) {
    extern float inventoryMoney;
    extern bool transactionStatus;
    int note;
    int changeGiven;
    int Change(float,int);

    printf("\n-----------------------TRANSACTION PROCESSING----------------------------\n");



    printf("+------------------------------------------------------------------------+\n");
    printf("| Accepted Notes of the kiosk are Rs. 1000, Rs. 500, Rs. 200 and Rs. 100 |\n");
    printf("+------------------------------------------------------------------------+\n");

    while (1) {
        printf("Enter the Note (Only one note should be entered)\n");
        scanf("%d",&note);

        if (note!=100 && note!=200 && note!=500 && note!=1000) {
            printf("Invalid Note!\n");
            continue;


        }
        break;

    }


    if (totalFee<=note) {
        printf("Transaction is processing...\n");
        if (totalFee==note) {
            printf("Transaction Success!\n");
            transactionStatus = true;
            successfullTransactionCount++;
            inventoryMoney+=totalFee;
        }else {
            changeGiven = Change(totalFee,note);

            if (changeGiven) {
                printf("Transaction Success!\n");
                transactionStatus = true;
                successfullTransactionCount++;
                inventoryMoney+=totalFee;
            }else {
                printf("Note is returned. Transaction cancelled.\n");
            }
        }

    }else {
        printf("Insufficient Money!\n");

    }


}




//Report Generation
void reportGeneration() {
    printf("\n\nDAILY REPORT\n");
    printf("\nSuccessfull Transactions\t%d\n",successfullTransactionCount);
    printf("+--------------------------------------------------------\n");
    printf("+-------------------------------------------------------+\n");
    printf("| Service\t\t\t|Revenue(LKR) \t\t|\n");
    printf("+-------------------------------------------------------+\n");

    printf("\nFine Payment Revenue\t\t%d\nBook Reservation Revenue\t%d\nMembership Renewal Revenue\t%d\nLost Card Replacement Revenue\t%d\n",service_1_rev,service_2_rev,service_3_rev,service_4_rev);

    printf("+-------------------------------------------------------+\n");
    int totalRevenue = service_1_rev + service_2_rev + service_3_rev + service_4_rev;
    printf("Total Revenue of the Day\t%d\n",totalRevenue);
    printf("+-------------------------------------------------------+\n");
    printf("\tThank you, Come Again!\n");
    printf("+-------------------------------------------------------+\n");
}



void main() {

    char service;
    float totalFee;
    bool refineStatus;
    void inputService(char *);
    extern bool transactionStatus;


    while (1) {
        transactionStatus = false;
        printf("Welcome to the self-service kiosk in University of Kelaniya Library\n ");
        inputService(&service);


        if (service=='1') {

            refineStatus = finePayment(&totalFee);

            if (!refineStatus) {
                continue;
            }else {
                printf("\nYou have to Pay LKR %.2f\n",totalFee);
                transactionProcessing(totalFee);
                if (transactionStatus) {
                    service_1_rev += totalFee;

                }
            }

        }else if (service == '2') {

            int books = bookReservations(&totalFee);

            if (books > 0) {

                printf("\nYou have to Pay LKR %.2f\n", totalFee);

                transactionProcessing(totalFee);

                if (transactionStatus) {
                    service_2_rev += totalFee;
                    reservationSlotsAvailable -= books;
                }
            }

        }else if (service=='3') {
            membershipRenewal(&totalFee);
            printf("\nYou have to Pay LKR %.2f\n",totalFee);
            transactionProcessing(totalFee);
            if (transactionStatus) {
                service_3_rev += totalFee;
                renewalsAvailable--;
            }

        }else if (service=='4') {
            cardReplacement();
            transactionProcessing(totalFee);
            if (transactionStatus) {

                service_4_rev += LOST_CARD_REP;
                replacementCardsAvailable--;
            }


        }else if (service=='0') {
            break;
        }
        else {
            printf("Service Unavailable\n");
            break;
        }








    }

    reportGeneration();




}