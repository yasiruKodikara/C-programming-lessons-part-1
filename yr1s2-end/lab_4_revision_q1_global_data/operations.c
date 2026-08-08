struct complex {
    int real;
    int img;
};

extern struct complex x,y,p,q,r;

void sum() {
    p.real = x.real+y.real;
    p.img = x.img+y.img;
}

void product() {
    q.real = ((x.real*y.real)-(x.img*y.img));
    q.img = (x.real*y.img)+(x.img*y.real);

}

void quotient() {
    r.real = ((x.real*y.real)+(x.img*y.img))/(((y.real)*(y.real))+((y.img)*(y.img)));
    r.img = ((x.img*y.real) - (x.real*y.img))/(((y.real)*(y.real))+((y.img)*(y.img)));
}