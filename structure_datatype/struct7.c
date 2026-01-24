#include<stdio.h>
#include<string.h>

struct employee {
    char name[80];
    int age;
    int salary;
};

int main() {
    struct employee emp[10]={
        { "Alice Henderson", 28, 72000.00},
        { "Marcus Chen", 34, 85500.00},
        { "Sarah Jenkins", 42, 110000.00},
        { "Leo Rodriguez", 25, 58000.00},
        { "Elena Dumitru", 31, 92000.00},
        { "David Okafor", 39, 105000.00},
        { "Sophie Mueller", 29, 67000.00},
        { "James Whitaker", 45, 125000.00},
        { "Aria Gupta", 27, 74500.00},
        { "Jordan Smith", 36, 89000.00}
    };


    for (int i=0;i<10;i++) {
        printf("%s\t%d\t%d\n",emp[i].name,emp[i].age,emp[i].salary);
    }
}