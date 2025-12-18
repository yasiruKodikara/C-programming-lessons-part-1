//behaviour of structures in local and global scopes without using structure tag

#include<stdio.h>

//global structure
struct {
    char *name;
    int age;
    int salary;
}emp1,emp2;

int manager() {
    //local structure in manager function
    struct {
        char *name;
        int age;
        int salary;
    }manager;

    manager.age = 27;

    if (manager.age < 18) {
        manager.salary = 50000;
    }else {
        manager.salary = 90000;
    }

    return manager.salary;
}

int main() {
    printf("Enter the salary of employee1: ");
    scanf("%d", &emp1.salary);

    printf("Enter the salary of employee2: ");
    scanf("%d", &emp2.salary);

    printf("Employee 1 salary is: %d\n", emp1.salary);
    printf("Employee 2 salary is: %d\n", emp2.salary);

    printf("Manager's salary is %d", manager());

    return 0;
}