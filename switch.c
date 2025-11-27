#include <stdio.h>

void main() {
    float x,y,z;
    char o;
    scanf("%f %c %f",&x,&o,&y);
    switch (o) {
        case '+':
            printf("%.2f",x+y);
            break;

        case '-':
            printf("%.2f",x-y);
            break;

    }
}
