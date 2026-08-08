#include <stdio.h>

struct student {
    int id;
    char name[20];
    char department;
    int year;
};

int count = 0;
struct student students[100];

void inputData() {
    extern struct student students[];
    extern int count;
    while (1) {
        printf("Enter %d studnet's Data\n",count);

        printf("ID:");
        scanf("%d",&students[count].id);

        if (students[count].id==-1) {
            break;
        }

        printf("Name:");
        scanf("%s",students[count].name);

        printf("Department:");
        scanf(" %c",&students[count].department);

        printf("Year:");
        scanf("%d",&students[count].year);

        (count)++;
    }

}

void outputData() {

    extern struct student students[];
    extern int count;
    for (int i = 0; i < count; i++) {

        printf("\nSTUDENT %d\n", i + 1);

        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Department: %c\n", students[i].department);
        printf("Year: %d\n", students[i].year);
    }
}

void getStudentsByYear() {
    extern struct student students[];
    extern int count;
    int year;
    printf("What is the Year?\n");
    scanf("%d",&year);

    for (int i=0; i<count; i++) {
        if (year==students[i].year) {
            printf("%s\n",students[i].name);
        }

    }

}

int main(void) {


    inputData();
    outputData();

    getStudentsByYear();


    return 0;
}