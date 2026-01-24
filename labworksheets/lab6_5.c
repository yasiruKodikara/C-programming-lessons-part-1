#include <stdio.h>
struct date{
    int month;
    int day;
    int year;
};

typedef struct {
    char name[80];
    float salary;
    struct date joinedDate;
}employee;

int main() {
    employee emp[20]={
        {"James Smith", 12505, {1, 15, 2018}},
        {"Maria Garcia", 62000, {3, 22, 2019}},
        {"Robert Johnson", 23000, {6, 10, 2020}},
        {"Linda Williams", 75000, {11, 5, 2017}},
        {"Michael Brown", 51000, {2, 28, 2021}},
        {"Elizabeth Jones", 68000, {9, 14, 2016}},
        {"David Miller", 43000, {12, 1, 2022}},
        {"Jennifer Davis", 59000, {4, 18, 2015}},
        {"William Rodriguez", 82000, {7, 30, 2014}},
        {"Susan Martinez", 54000, {5, 12, 2020}},
        {"Joseph Hernandez", 47000, {8, 25, 2021}},
        {"Margaret Lopez", 71000, {10, 3, 2018}},
        {"Charles Gonzalez", 53000, {1, 20, 2019}},
        {"Dorothy Wilson", 66000, {3, 11, 2017}},
        {"Christopher Anderson", 49000, {6, 7, 2022}},
        {"Karen Thomas", 77000, {11, 19, 2015}},
        {"Thomas Taylor", 15000, {2, 14, 2023}},
        {"Nancy Moore", 64000, {9, 28, 2016}},
        {"Matthew Jackson", 45000, {12, 5, 2021}},
        {"Lisa Martin", 60000, {4, 9, 2018}
        }
    };

    for (int i=0;i<20;i++) {
        int salary = emp[i].salary;

        if (salary>10000 && salary<=30000) {
            emp[i].salary+=(salary*0.1);
        }else if (salary<=10000) {
            emp[i].salary+=(salary*0.15);
        }
    }

    for (int i=0;i<20;i++) {

        printf("%s \t %.2f\n",emp[i].name,emp[i].salary);
    }
}