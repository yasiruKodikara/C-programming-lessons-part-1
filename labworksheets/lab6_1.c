#include <stdio.h>

struct time_struct {
    int hour;
    int minute;
    int second;
};

void main() {
    struct time_struct t1,t2,t3,t4;

    printf("Enter time in hh:mm:ss manner\n");
    scanf("%d:%d:%d",&t1.hour,&t1.minute,&t1.second);

    printf("The time is,%d:%d:%d",t1.hour,t1.minute,t1.second);
}