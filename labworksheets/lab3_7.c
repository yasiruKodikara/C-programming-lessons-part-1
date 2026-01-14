#include <stdio.h>
#include <math.h>
int main() {
    int num;
    int squared_tot;
    int neg_count = 0,p_count = 0;

    while (1) {
        printf("Enter number:");
        scanf("%d",&num);
        if (num==9999) {
            break;
        }
        if (num>0) {
            printf("The square root of %d is %f\n",num,sqrt(num));
            squared_tot += sqrt(num);
            p_count += 1;
            continue;
        }

        neg_count++;
    }

    printf("The count of positive numbers = %d",p_count);
    printf("\n");
    printf("The count of negative numbers = %d\n",neg_count);
    return 0;
}