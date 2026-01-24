#include <stdio.h>
#define ROW 3
#define COL 3
int main() {
    int arr1[ROW][COL] = {
        {4,9,2},
        {3,5,7},
        {8,1,6}
    };
    int sec_tot=0,prim_tot=0,row_tot=0,col_tot=0,prim_h=0,sec_h=0;

//there are few logical errors


    for (int i=ROW-1,j=0;j<ROW;j++,i--) {
        prim_tot+=arr1[j][j];
        sec_tot+=arr1[i][i];

        for (int k=0;k<COL;k++) {
            col_tot+=arr1[k][j];
            row_tot+=arr1[j][k];

        }
        if (col_tot!=row_tot) {
            printf("not a magic");
            break;
        }

        // printf("col total = %d\n",col_tot);
        // printf("row total = %d\n",row_tot);

        if (j==ROW-1) {
            if (prim_tot==sec_tot) {
                printf("magic");
            }else {
                printf("not a magic");
            }
            break;
        }
        col_tot=0,row_tot=0;

    }

    //checking
    // printf("Primary total = %d\n",prim_tot);
    // printf("Sec total = %d\n",sec_tot);
    // printf("col total = %d\n",col_tot);
    // printf("row total = %d\n",row_tot);




    return 0;
}