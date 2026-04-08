#include<stdio.h>

struct distance {
    int inches;
    int foot;
};
void main() {
    int d1,d2,sum;
    struct distance distance1,distance2,result;

    printf("Enter distance 1 inches:");
    scanf("%d",&distance1.inches);
    printf("Enter distance 1 foot:");
    scanf("%d",&distance1.foot);


    printf("Enter distance 2 inches:");
    scanf("%d",&distance2.inches);
    printf("Enter distance 2 foot:");
    scanf("%d",&distance2.foot);




    result.foot = distance1.foot + distance2.foot;
    result.inches = distance1.inches + distance2.inches;

    while (result.inches>=12) {
        result.inches -=12;
        result.foot++;

    }

    printf("The sum = %d ' %d",result.foot,result.inches);


}