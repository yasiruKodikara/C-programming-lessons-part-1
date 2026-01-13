#include <stdio.h>

void main() {
    char name[20];
    char gender;
    float balance=0,bonus,extra_bonus;

    printf("Enter your name: ");
    scanf("%s",name);
    printf("Enter your gender: ");
    scanf("\n%c",&gender);
    printf("Enter your balance: ");
    scanf("%f",&balance);

    bonus = balance*0.02;
    extra_bonus = 0;

    if(gender=='F' && balance>5000) {
        extra_bonus=balance*0.05;

    }

    float final;
    final = balance+bonus+extra_bonus;
    printf("%.2f",final);

}
