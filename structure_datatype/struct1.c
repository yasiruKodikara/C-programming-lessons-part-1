
//Structures in global scope
#include <stdio.h>

struct {
    char *engine;
} car1,car2;

int main() {
    car1.engine = "DDis 190 Engine";
    car2.engine = "DDDs 900 Engine";

    printf("%s\n",car1.engine);
    printf("%s ",car2.engine);
}