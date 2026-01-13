#include <stdio.h>
void main() {
    int mark = 0;
    char grade[10];

    printf("Enter your mark:");
    scanf("%d",&mark);

    if (mark>=80 && mark<=100) {
        printf("Grade:Houners");
    }else if (mark>=60) {
        printf("Grade:DF");
    }else if (mark>=50) {
        printf("Grade:SD");
    }else if (mark>=40) {
        printf("Grade:TD");
    }else {
        printf("Grade:Fail");
    }

    printf("%s",grade);
}