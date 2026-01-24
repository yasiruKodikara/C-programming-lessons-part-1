#include <stdio.h>

struct date {
    char name[80];
    int month;
    int day;
    int year;
};

void main() {
    struct date birthdates[4]={
        "AKoN",11,2,2020,
        "BKoN",23,34,1002,
        "CKoN",12,3,2987,
        "DKoN",3,6,2003
    };

    printf("%d", birthdates[0].month);
}