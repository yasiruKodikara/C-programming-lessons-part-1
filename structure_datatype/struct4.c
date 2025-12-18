#include <stdio.h>

//structure declaration using typetypedef

typedef struct employee{
    char *name;
    int age;
    int salary;
}EMPLOYEE;


int main() {
    EMPLOYEE emp1;

    printf("Enter the salary of employee1: ");
    scanf("%d", &emp1.salary);
    printf("Employee 1 salary is: %d\n", emp1.salary);

    return 0;

}