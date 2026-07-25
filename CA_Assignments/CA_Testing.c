#include <stdbool.h>
#include <stdio.h>

/* Prices */
#define FINE_PAY 20
#define BOOK_RES 100
#define MEM_RENEW 500
#define LOST_CARD_REP 250

/* Discounts */
#define UG_DISCOUNT 0.15f
#define G_DISCOUNT 0.10f

/* Service inventories: change these initial values as needed */
int reservationSlots = 10;
int renewalsAvailable = 10;
int replacementCardsAvailable = 10;

/* Change-note inventories: change these initial values as needed */
int change500 = 5;
int change200 = 5;
int change100 = 5;
int change50 = 5;
int change20 = 5;

/* Report data */
int successfulTransactionCount = 0;
float service_1_rev = 0;   /* Fine payments */
float service_2_rev = 0;   /* Book reservations */
float service_3_rev = 0;   /* Membership renewals */
float service_4_rev = 0;   /* Card replacements */


/* Function declarations */
void inputService(char *service);
int finePayment(float *totalFee);
int bookReservations(float *totalFee);
void membershipRenewal(float *totalFee);
float discountGenerator(void);
int transactionProcessing(float totalFee);
int returnChange(int change);
void displayRemainingInventory(void);
void reportGeneration(void);


/* Menu */
void inputService(char *service) {
    printf("\n----------------------- SERVICES LIST ----------------------\n");
    printf("1. Fine Payment (per overdue day)\n");
    printf("2. Book Reservation\n");
    printf("3. Membership Renewal\n");
    printf("4. Lost Library Card Replacement\n");
    printf("0. Exit\n");
    printf("-------------------------------------------------------------\n");
    printf("Enter the service number: ");

    scanf(" %c", service);
}


/* Service 1: Fine Payment */
int finePayment(float *totalFee) {
    int overdueDays;

    printf("Enter number of overdue days: ");
    scanf("%d", &overdueDays);

    if (overdueDays <= 0) {
        printf("Invalid number of overdue days.\n");
        return 0;
    }

    *totalFee = overdueDays * FINE_PAY;
    return 1;
}


/* Service 2: Book Reservation */
int bookReservations(float *totalFee) {
    int numberOfBooks;
    float discount;

    printf("Enter number of books to reserve (maximum 3): ");
    scanf("%d", &numberOfBooks);

    if (numberOfBooks < 1 || numberOfBooks > 3) {
        printf("Invalid number of books.\n");
        return 0;
    }

    if (reservationSlots < numberOfBooks) {
        printf("Service Unavailable\n");
        return 0;
    }

    discount = discountGenerator();

    *totalFee = numberOfBooks * BOOK_RES;
    *totalFee = *totalFee - (*totalFee * discount);

    return numberOfBooks;
}


/* Service 3: Membership Renewal */
void membershipRenewal(float *totalFee) {
    float discount = discountGenerator();

    *totalFee = MEM_RENEW - (MEM_RENEW * discount);
}


/* Discount generator */
float discountGenerator(void) {
    char role;

    printf("Student type:\n");
    printf("U - Undergraduate (15%% discount)\n");
    printf("P - Postgraduate (10%% discount)\n");
    printf("Enter type: ");
    scanf(" %c", &role);

    if (role == 'U' || role == 'u') {
        return UG_DISCOUNT;
    }

    return G_DISCOUNT;
}


/*
  Attempts to return exact change.
  Each denomination can be used only once.
  Returns 1 if exact change is possible; otherwise returns 0.
*/
int returnChange(int change) {
    int use500 = 0, use200 = 0, use100 = 0, use50 = 0, use20 = 0;
    int remaining = change;

    if (remaining >= 500 && change500 > 0) {
        use500 = 1;
        remaining -= 500;
    }

    if (remaining >= 200 && change200 > 0) {
        use200 = 1;
        remaining -= 200;
    }

    if (remaining >= 100 && change100 > 0) {
        use100 = 1;
        remaining -= 100;
    }

    if (remaining >= 50 && change50 > 0) {
        use50 = 1;
        remaining -= 50;
    }

    if (remaining >= 20 && change20 > 0) {
        use20 = 1;
        remaining -= 20;
    }

    if (remaining != 0) {
        return 0;
    }

    /* Deduct notes only after exact change is confirmed */
    change500 -= use500;
    change200 -= use200;
    change100 -= use100;
    change50 -= use50;
    change20 -= use20;

    printf("\nChange returned:\n");
    if (use500) printf("Rs. 500 x 1\n");
    if (use200) printf("Rs. 200 x 1\n");
    if (use100) printf("Rs. 100 x 1\n");
    if (use50)  printf("Rs. 50 x 1\n");
    if (use20)  printf("Rs. 20 x 1\n");

    return 1;
}


/*
  Returns 1 only when payment and change are both valid.
*/
int transactionProcessing(float totalFee) {
    int note;
    int change;

    printf("\n---------------- TRANSACTION PROCESSING ----------------\n");
    printf("Accepted notes: Rs. 1000, Rs. 500, Rs. 200, Rs. 100\n");
    printf("Enter one note: ");

    scanf("%d", &note);

    if (note != 100 && note != 200 && note != 500 && note != 1000) {
        printf("Invalid Note!\n");
        return 0;
    }

    if (note < totalFee) {
        printf("Insufficient Money!\n");
        return 0;
    }

    change = note - (int)totalFee;

    if (change > 0) {
        if (!returnChange(change)) {
            printf("Unable to Return Change\n");
            printf("Inserted note is returned. Transaction cancelled.\n");
            return 0;
        }
    }

    printf("Transaction Success!\n");
    return 1;
}


/* Remaining inventory after every transaction */
void displayRemainingInventory(void) {
    printf("\n---------------- REMAINING INVENTORY ----------------\n");
    printf("Reservation slots: %d\n", reservationSlots);
    printf("Membership renewals: %d\n", renewalsAvailable);
    printf("Card replacements: %d\n", replacementCardsAvailable);
    printf("Rs. 500 notes: %d\n", change500);
    printf("Rs. 200 notes: %d\n", change200);
    printf("Rs. 100 notes: %d\n", change100);
    printf("Rs. 50 notes : %d\n", change50);
    printf("Rs. 20 notes : %d\n", change20);
}


/* Daily report */
void reportGeneration(void) {
    float totalRevenue;

    totalRevenue = service_1_rev + service_2_rev +
                   service_3_rev + service_4_rev;

    printf("\n\n================ DAILY REPORT ================\n");
    printf("Successful Transactions: %d\n\n", successfulTransactionCount);

    printf("Fine Payments          : Rs. %.2f\n", service_1_rev);
    printf("Book Reservations      : Rs. %.2f\n", service_2_rev);
    printf("Membership Renewals    : Rs. %.2f\n", service_3_rev);
    printf("Card Replacements      : Rs. %.2f\n", service_4_rev);

    printf("\nTotal Revenue          : Rs. %.2f\n", totalRevenue);
    printf("================================================\n");
}


int main(void) {
    char service;
    float totalFee;
    int booksReserved;
    int transactionStatus;

    while (1) {
        printf("\nWelcome to the University Library self-service kiosk.\n");
        inputService(&service);

        if (service == '0') {
            break;
        }

        if (service == '1') {
            if (!finePayment(&totalFee)) {
                displayRemainingInventory();
                continue;
            }

            printf("You have to pay Rs. %.2f\n", totalFee);

            transactionStatus = transactionProcessing(totalFee);

            if (transactionStatus) {
                successfulTransactionCount++;
                service_1_rev += totalFee;
            }
        }

        else if (service == '2') {
            booksReserved = bookReservations(&totalFee);

            if (booksReserved == 0) {
                displayRemainingInventory();
                continue;
            }

            printf("You have to pay Rs. %.2f\n", totalFee);

            transactionStatus = transactionProcessing(totalFee);

            if (transactionStatus) {
                reservationSlots -= booksReserved;
                successfulTransactionCount++;
                service_2_rev += totalFee;
            }
        }

        else if (service == '3') {
            if (renewalsAvailable <= 0) {
                printf("Service Unavailable\n");
                displayRemainingInventory();
                continue;
            }

            membershipRenewal(&totalFee);

            printf("You have to pay Rs. %.2f\n", totalFee);

            transactionStatus = transactionProcessing(totalFee);

            if (transactionStatus) {
                renewalsAvailable--;
                successfulTransactionCount++;
                service_3_rev += totalFee;
            }
        }

        else if (service == '4') {
            if (replacementCardsAvailable <= 0) {
                printf("Service Unavailable\n");
                displayRemainingInventory();
                continue;
            }

            totalFee = LOST_CARD_REP;

            printf("You have to pay Rs. %.2f\n", totalFee);

            transactionStatus = transactionProcessing(totalFee);

            if (transactionStatus) {
                replacementCardsAvailable--;
                successfulTransactionCount++;
                service_4_rev += totalFee;
            }
        }

        else {
            printf("Invalid service number.\n");
        }

        displayRemainingInventory();
    }

    reportGeneration();
    return 0;
}