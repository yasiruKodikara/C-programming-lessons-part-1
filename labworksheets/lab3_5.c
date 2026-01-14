#include<stdio.h>
int main() {
    int count=5;
    int age;
    int count_test = 0;

    for (int i=1;i<=count;i++) {
        printf("Enter age: ");
        scanf("%d",&age);

        //using continue
        if (age<50 || age>60) {
            continue;
        }
        count_test++;
    }
    printf("The count of 50-60 people:%d",count_test);

    return 0;
}