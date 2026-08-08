#include <stdio.h>

struct product {
    int brandCode;
    int qty;
    float price;
};
float total = 0;
int c=0;
struct product p;
struct product pArr[100];



void inputData() {
    extern int c;
    extern struct product pArr[];

    while(1) {
        printf("Enter product %d details\n",c);

        printf("Brand Code:");
        scanf("%d",&pArr[c].brandCode);

        if (pArr[c].brandCode==-1) {
            break;
        }

        printf("Quantity:");
        scanf("%d",&pArr[c].qty);

        printf("Price");
        scanf("%f",&pArr[c].price);

        (c)++;


    }
}

void output() {
    extern struct product pArr[];
    extern float total;
    extern int c;
    int count = c;

    for (int i=0; i<count;i++) {
        printf("PRODUCT %d DETAILS\n",count);
        printf( "Brand code:%d\n",pArr[i].brandCode);
        printf( "Quantity:%d\n",pArr[i].qty);
        printf( "Price:%.2f\n",pArr[i].price);

        total+= pArr[i].qty*pArr[i].price;


        printf("___________________________\n");
    }

    printf("The Total Value is %.2f",total);
}

int main(void) {



    inputData();
    output();

    return 0;
}