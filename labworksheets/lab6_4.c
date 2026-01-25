#include <stdio.h>
#define len 20
struct soap {
    int brand_code;
    int qty;
    int price;
};
int main() {
    struct soap s[len]={
        {101, 50, 45},  {102, 30, 60},  {103, 25, 120}, {104, 100, 15},
        {105, 15, 200}, {106, 60, 35},  {107, 40, 55},  {108, 85, 20},
        {109, 12, 150}, {110, 70, 40},  {111, 20, 95},  {112, 45, 30},
        {113, 33, 75},  {114, 90, 10},  {115, 05, 300}, {116, 55, 50},
        {117, 28, 85},  {118, 65, 25},  {119, 10, 110}, {120, 38, 48}

    };
    int c = 0;
    int code;

    while (1) {
        printf("Enter brand code:(press 0 if you want to quite)");
        scanf("%d",&code);
        if (code == 0) {
            break;
        }
        s[c].brand_code = code;

        printf("\nEnter quantity:");
        scanf("%d", &s[c].qty);

        printf("\nEnter price:");
        scanf("%d", &s[c].price);

        c++;
    }

    for (int i=0;i<len;i++) {
        printf("Total Value of brand %d = %d \n",s[i].brand_code,s[i].price*s[i].qty);
    }
    return 0;
}