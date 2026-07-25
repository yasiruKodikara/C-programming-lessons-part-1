#include <stdio.h>


void inputNums(int *a,int *b) {
    printf("Enter value 1:");
    scanf("%d",a);

    printf("Enter value 2:");
    scanf("%d",b);
}

float average(int a,int b) {
    //a,b call by value
    float avg;

    avg = (a+b)/2.;
    return avg;

}

void output(float average) {
    printf("Average is %.2f",average);
}



int main(void) {
    int a,b;
    float avg;
    void inputNums(int *,int *);
    float average(int,int);
    void output(float);

    inputNums(&a,&b);
    avg = average(a,b);
    output(avg);





}