#include<stdio.h>

extern int x,y;

void absolute() {
    if (x>0) {
        y = -1;
    }else if (x<0) {
        y = 1;
    }else {
        y = 0;
    }
}