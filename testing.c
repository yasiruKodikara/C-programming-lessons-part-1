#include<stdio.h>
#include<string.h>

void main() {

    int num;
    scanf("%d",&num);

    char t = (num>0)?'y':'n';

    switch (t) {
        case 'y':
            printf("Positive");
            break;
        case 'n':
            printf("Negative");
            break;
        default:
            printf("zero");
            break;
    }

}