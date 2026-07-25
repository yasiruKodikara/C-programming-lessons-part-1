#include <stdio.h>
#define LUCKY_NUMBER 5

void luckyNumber(int a) {
    printf("The number you entered is %d\n",a);
    printf("This is a lucky number");

}

void otherNumber(int a) {
    printf("The number you entered is %d\n",a);
    printf("This is not a lucky number");
}



void main() {
    int num1;

    printf("Input any integer:");
    scanf("%d",&num1);

    if (num1==LUCKY_NUMBER) {
        luckyNumber(num1);
    }else {
        otherNumber(num1);
    }

}