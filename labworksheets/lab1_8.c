#include <stdio.h>

void main() {
    int p,y;
    float r,si;

    printf("Enter principal:");
    scanf("%d",&p);

    printf("Enter year count:");
    scanf("%d",&y);

    printf("Enter interest:");
    scanf("%f",&r);

    si = (p*y*r)/100;

    printf("The simple interest is %.2f",si);

}
