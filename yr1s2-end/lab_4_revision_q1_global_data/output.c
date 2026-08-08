#include <stdio.h>

struct complex {
    int real;
    int img;
};

extern struct complex p,q,r;

void output() {

    printf("X + Y = %d + i%d\n",p.real,p.img);
    printf("X * Y = %d + i%d\n",q.real,q.img);
    printf("X / Y = %d + i%d\n",r.real,r.img);
}