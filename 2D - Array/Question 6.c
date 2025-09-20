/*  Q6. Maximum in Each Row & Column [8 Marks]
 Write a program that takes a 4 × 4 matrix and finds the maximum element in each
 row and each column. (Row max: 4 Marks, Column max: 4 Marks) */

#include <stdio.h>

int main() {
    int mat[4][4];
    int x, y;
    
    printf("Enter the Elements of 4x4 Matrix:\n");
    for(x = 0; x < 4; x++) {
        for(y = 0; y < 4; y++) {
            printf("Enter element [%d][%d]:\n", x+1, y+1);
            scanf("%d", &mat[x][y]);
        }
    }
    
    // Display the Matrix
    printf("\nMatrix 4X4:\n");
    for(x = 0; x < 4; x++) {
        for(y = 0; y < 4; y++) {
            printf("%d\t", mat[x][y]);
        }
        printf("\n");
    }
    
    // Find max Element in each row
    printf("\nMaximum element in each row:\n");
    for(x = 0; x < 4; x++) {
        int maxrow = mat[x][0];
        for(y = 1; y < 4; y++) {
            if(mat[x][y] > maxrow) {
                maxrow = mat[x][y];
            }
        }
        printf("Row %d: %d\n", x+1,maxrow);
    }
    
    // Find max Element in each column
    printf("\nMaximum element in each column:\n");
    for(y = 0; y < 4; y++) {
        int maxcol = mat[0][y];
        for(x = 1; x < 4; x++) {
            if(mat[x][y] > maxcol) {
                maxcol = mat[x][y];
            }
        }
        printf("Column %d: %d\n", y+1,maxcol);
    }
    
    return 0;
}
