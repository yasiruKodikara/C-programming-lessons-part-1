#include <math.h>
#include <stdio.h>
#define len 5
int main() {

    int mark;
    int total=0,count=0,vc=0;
    float mean=0,sd=0,var=0;

    while (1) {
        printf("Enter mark(Enter the -1 to escape): ");
        scanf("%d",&mark);

        if (mark==-1) {
            break;
        }
        vc+=(mark*mark);
        total+=mark;
        count++;
    }

    //calculating mean
    mean=total/(float)count;

    //calculating varience
    var=(vc/count)-(mean*mean);

    //calculating the sd
    sd=sqrt(var);

    //print
    printf("mean:%.2f",mean);
    printf("\n");
    printf("sd:%.2f",sd);
    printf("\n");
    printf("varience:%.2f",var);

    return 0;
}