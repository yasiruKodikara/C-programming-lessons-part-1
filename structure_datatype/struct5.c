
#include <stdio.h>

struct book {
    char title[50];
    char author[50];
    int pages;
    float price;
}B1,B2,B3;

void main(){
    struct book B1 = {"Deep Learning","akon",400,5000.5};
    printf("%s ",B1.title);
    printf("%s ",B1.author);
    printf("%d ",B1.pages);
    printf("%.2f ",B1.price);

};