#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main() {
    float balance=10000;
    int attempts=0;
    int pin_correct=0;
    int pin=0;
    while (attempts<3 && pin_correct==0) {
        printf("Enter PIN:");
        scanf("%d",&pin);
        if (pin==1234) {
            pin_correct=1;
        }
        attempts++;
    }
    if (pin_correct==0) {
        printf("your card is blocked");
        exit(0);
    }

}