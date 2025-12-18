#include<stdio.h>
#define i 0.02

void main() {
    float P,monthlyPay,interest=0,totalInterest=0;
    int c=0,A;

    printf("Enter the Loan amount:\n");
    scanf("%f",&P);
    printf("Enter the monthly pay amount:\n");
    scanf("%d",&A);

    while (P>0) {
        c+=1;
        interest=P*i;
        totalInterest+=interest;
        monthlyPay=A-interest;


        P=P-(monthlyPay);


        printf("The %d th month, the amount of interest paid is %.2f\n",c,interest);
        printf("The %d th month, The amount of money applied toward reducing the unpaid capital is %.2f\n",c,(monthlyPay));
        printf("The cumulative interest paid up to the %d th month:%.2f\n",c,totalInterest);
        printf("The remaining unpaid capital at the end of %d th month:%.2f\n",c,P);
        printf("__________________________________________________________________________________________________\n");

    }


    printf("The total number of monthly payments required to fully repay the loan:%d\n",c);


}