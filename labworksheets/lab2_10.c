#include<stdio.h>
int main() {
    char name[20];
    float mass,BMI;
    float height;

    printf("Enter the name \n");
    scanf("%s",name);
    printf("Enter the mass of a\n");
    scanf("%f",&mass);
    printf("Enter the height of a\n");
    scanf("%f",&height);

    BMI = (height*height)/mass;

    printf("The BMI is %f\n",BMI);

    if (BMI>27.5) {
        printf("High risk of developing heart disease, high blood pressure, stroke, diabetes");
    }else if (BMI>23) {
        printf("Moderate risk of developing heart disease, high blood pressure, stroke,diabetes");
    }else if (BMI>18.5) {
        printf("Low Risk (healthy range) ");
    }else {
        printf("Risk of developing problems such as nutritional deficiency and osteoporosis ");
    }

    return 0;

}