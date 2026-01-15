#include <stdio.h>
#include <stdlib.h>

int main() {
    int marks[50]={
        43, 65, 51, 27, 79, 11, 56, 61, 82, 9,
        25, 36, 7, 49, 55, 63, 74, 81, 49, 37,
        40, 49, 16, 75, 87, 91, 33, 24, 58, 78,
        65, 56, 76, 67, 45, 54, 36, 63, 12, 21,
        73, 49, 51, 19, 39, 49, 68, 93, 85, 59
    };
    int len = sizeof(marks)/sizeof(marks[0]);

    int freq[11];
    for (int i=0;i<11;i++) {
        freq[i]=0;
    }
    int g1,g2,g3,g4,g5,g6,g7,g8,g9,g10,g11;

    for (int i=0;i<len;i++) {
        int mark = marks[i];
        int div = mark/10;
        freq[div]++;

        // if (mark>100) {
        //     printf("Invalid mark!");
        //     continue;
        // }else if () {
        //
        // }else if () {
        //
        // }
        // else if () {
        //
        // }
        // else if () {
        //
        // }
        // else if () {
        //
        // }
        // else if () {
        //
        // }
        // else if () {
        //
        // }
        // else if () {
        //
        // }
        // else if () {
        //
        // }
        // else if () {
        //
        // }
        // else if () {
        //
        // }else {
        //
        // }
    }
    printf("Group\t\tFrequency\n");
    for (int i=0;i<11;i++) {

        printf("%d\t\t%d\n",i,freq[i]);

    }



    return 0;
}
