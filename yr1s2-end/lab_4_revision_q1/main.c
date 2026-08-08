#include <stdio.h>

struct complex {
    int real;
    int img;
};

struct complex c1;

void input(struct complex *x) {

    printf("Enter the real part:");
    scanf("%d",&x->real);

    printf("Enter the imaginary part:");
    scanf("%d",&x->img);
}

void sum(struct complex x, struct complex y, struct complex *p) {
    p->real = x.real+y.real;
    p->img = x.img+y.img;
}

void product(struct complex x, struct complex y, struct complex *q) {
    q->real = ((x.real*y.real)-(x.img*y.img));
    q->img = (x.real*y.img)+(x.img*y.real);

}

void quotient(struct complex x, struct complex y, struct complex *r) {
    r->real = ((x.real*y.real)+(x.img*y.img))/(((y.real)*(y.real))+((y.img)*(y.img)));
    r->img = ((x.img*y.real) - (x.real*y.img))/(((y.real)*(y.real))+((y.img)*(y.img)));
}

void output(struct complex p, struct complex q, struct complex r) {

    printf("X + Y = %d + i%d\n",p.real,p.img);
    printf("X * Y = %d + i%d\n",q.real,q.img);
    printf("X / Y = %d + i%d\n",r.real,r.img);
}

int main(void) {
    struct complex x,y,p,q,r;

    input(&x);
    input(&y);

    sum(x,y,&p);
    product(x,y,&q);
    quotient(x,y,&r);

    output(p,q,r);

    return 0;
}