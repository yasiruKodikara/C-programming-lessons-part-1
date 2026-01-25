#include <stdio.h>
#define len 20

struct student {
    int st_num;
    char name[len];
    char department[40];
    int year_joined;
};
int main () {
    struct student s[len]={
        {1001, "Alice Smith",    "Computer Science", 2023},
        {1002, "Bob Johnson",    "Mathematics",      2022},
        {1003, "Charlie Davis",  "Physics",          2024},
        {1004, "Diana Prince",   "Electrical Eng.",  2021},
        {1005, "Edward Norton",  "Mechanical Eng.",  2023},
        {1006, "Fiona Glen",     "Biology",          2022},
        {1007, "George Miller",  "Chemistry",        2024},
        {1008, "Hannah Abbott",  "Civil Engineering",2021},
        {1009, "Ian Wright",     "History",          2023},
        {1010, "Jenny Kim",      "Economics",        2022},
        {1011, "Kevin Hart",     "Philosophy",       2024},
        {1012, "Laura Palmer",   "Literature",       2021},
        {1013, "Mike Ross",      "Law",              2023},
        {1014, "Nina Simone",    "Music",            2022},
        {1015, "Oscar Isaac",    "Drama",            2024},
        {1016, "Peter Parker",   "Journalism",       2021},
        {1017, "Quinn Fabray",   "Psychology",       2023},
        {1018, "Riley Reid",     "Sociology",        2022},
        {1019, "Steven Strange", "Medicine",         2024},
        {1020, "Tony Stark",     "Aerospace Eng.",   2021}
    };
    int year;
    int c = 0;
    int student_num;

    while (1) {
        printf("Enter year:(Enter 0 if you want to quite)");
        scanf("%d", &year);
        if (year == 0) {
            break;
        }

        for (int i = 0; i < len; i++) {
            if (s[i].year_joined == year) {
                printf("%d\t%s\t%s\t\t%d\n", s[i].st_num, s[i].name, s[i].department, s[i].year_joined);
            }
        }
        c++;

    }
    printf("\n\t__________________________________\n");
    c = 0;
    while (1) {
        printf("Enter student number:(Enter 0 if you want to quite)");
        scanf("%d", &student_num);
        if (student_num == 0) {
            break;
        }
        for (int i = 0; i < len; i++) {
            if (s[i].st_num == student_num) {
                printf("%d\t%s\t%s\t\t%d\n", s[i].st_num, s[i].name, s[i].department, s[i].year_joined);
            }
        }


    }

    return 0;
}