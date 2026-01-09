#include <stdio.h>

void main() {
   float x,y;
   printf("Enter the value of x:");
   scanf("%f",&x);
   printf("\nEnter the value of y:");
   scanf("%f",&y);

   printf("(x+y)/(x-y) = %.2f\n",(x+y)/(x-y));
   printf("(x+y)/2 = %.2f\n",(x+y)/2);
   printf("(x+y)*(x-y) = %.2f\n",(x+y)*(x-y));


}

