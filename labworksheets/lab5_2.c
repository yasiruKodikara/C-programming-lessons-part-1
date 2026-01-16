#include<stdio.h>
#define ROW 4
#define COL 3
void main() {
    int arr1[ROW][COL] = {
        {310, 275, 365},
        {210, 190, 325},
        {405, 235, 240},
        {260, 300, 380}
    };
    int tot_by_girl=0,tot_by_item = 0,grand_tot_by_girls=0;


    for (int i=0;i<ROW;i++) {
        for (int j = 0;j<COL;j++) {
            tot_by_girl=tot_by_girl+arr1[i][j];
        }
        printf("%d th girls total = %d\n",i+1,tot_by_girl);
        grand_tot_by_girls += tot_by_girl;
        tot_by_girl=0;
    }
    printf("-----------------------------------------------------\n");

    for (int i=0;i<COL;i++) {
        for (int j = 0;j<ROW;j++) {
            tot_by_item+=arr1[j][i];
        }
        printf("%d th item total = %d\n",i+1,tot_by_item);
        tot_by_item=0;
    }

    printf("----------------------------------------------------\n");
    printf("Grand total by girls = %d",grand_tot_by_girls);


}