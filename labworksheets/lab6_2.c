#include <stdio.h>

struct distance {
    int inches;
    int feets;
};
int main() {
    struct distance d1,d2,d3;
    int d = 0;

    printf("Enter your distance1 in inches:");
    scanf("%d",&d);
    d1.feets = d/12;
    d1.inches = d%12;

    printf("Enter your distance2 in inches:");
    scanf("%d",&d);
    d2.feets = d/12;
    d2.inches = d%12;

    d3.feets = d1.feets+d2.feets;
    d3.feets+=(d1.inches+d2.inches)/12;
    d3.inches=(d1.inches+d2.inches)%12;


    printf("%d' %d",d3.feets,d3.inches);

    return 0;
}