#include <stdio.h>

void main() {
    char name[4];
    int code;
    float price;

    printf("Enter name:");
    scanf("%s",name);
    printf("Enter price:");
    scanf("%f",&price);
    printf("Enter code:");
    scanf("%d",&code);

    printf("Name\tCode\tPrice\n");
    printf("%s\t%d\t%.2f\n",name,code,price);

}
