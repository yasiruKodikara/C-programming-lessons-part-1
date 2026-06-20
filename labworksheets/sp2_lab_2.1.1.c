#include<stdio.h>
#include<math.h>

void inputLengths(int *a,int *b,int *c) {
    printf("Enter lengths:\n");
    scanf("%d %d %d",a,b,c);
}

float calculateArea(int a,int b,int c) {
    int s = (a+b+c)/2.0;
    float area;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area;

}

void outputArea(float area) {
    printf("The area is %.2f",area);
}

void main() {
    int a,b,c;
    float area;

    void inputLengths(int *,int *,int *);
    float calculateArea(int ,int ,int);
    void outputArea(float);

    inputLengths(&a,&b,&c);
    area = calculateArea(a,b,c);
    outputArea(area);
}
