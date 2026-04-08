#include<stdio.h>
#define nos 5
struct Student {
    int roll_no;
    char name[50];
    int marks[5];
    int total;
    float average;
    char grade;
};
int main() {
    int N = 0;
    struct Student students[N];


    // printf("Choose one:\n");
    // printf(" 1.Enter student details\n 2. Display all student records \n 3. Display students who passed \n 4. Exit\n");
    // char choice = getchar();
    //
    // switch (choice) {
    //     case('1'):
    //
    // }

    printf("Enter number of students:");
    scanf("%d",&N);

    for (int i = 0;i<N;i++) {
        students[i].total = 0;
        students[i].roll_no = i;

        printf("Enter %d th student's name:",i+1);
        scanf("%s",students[i].name);

        //getting marks
        for (int m=0;m<nos;m++) {
            printf("\nEnter %d th student's %d th subject marks:",i+1,m+1);
            scanf("%d",&students[i].marks[m]);

            students[i].total += students[i].marks[m];
        }

        //calculating the average
        students[i].average = (float)(students[i].total)/(nos);


        //assigning a grade
        if (students[i].average>=90) {
            students[i].grade = 'A';
        }else if (students[i].average>=75) {
            students[i].grade = 'B';
        }else if (students[i].average>=60) {
            students[i].grade = 'C';
        }else if (students[i].average>=40) {
            students[i].grade = 'D';
        }else {
            students[i].grade = 'F';
        }

    }

    //displaying the formatted output
    printf("\t==================== RESULT SHEET ====================\n");
    for (int k=0;k<N;k++) {

        printf("\tStudent Number\tStudent Name\tTotal Marks\tAverage\tGrade\n");
        printf("\t\t %d \t %s \t\t %d \t\t %.2f \t %c",students[k].roll_no,students[k].name,students[k].total,students[k].average,students[k].grade);
        printf("\n\n\n");
    }



    return 0;
}