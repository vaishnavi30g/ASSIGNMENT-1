/*  Q5. Transpose of a Matrix [4 Marks]
 Write a program to find the transpose of a given 3×3 matrix. */


#include <stdio.h>

int main() {
    int mat[3][3];
    int transpose[3][3];
    int x, y;
    
    printf("Enter the Elements of 3x3 matrix:\n");
    for(x = 0; x <3; x++) {
        for(y = 0; y < 3; y++) {
            printf("Enter Elements [%d][%d]:\n", x+1, y+1);
            scanf("%d", &mat[x][y]);
        }
    }
    
    // Calculate the transpose of the matrix.
    for(x = 0; x < 4; x++) {
        for(y = 0; y <3; y++) {
            transpose[y][x] = mat[x][y];
        }
    }
    
    // Display original matrix
    printf("\nOriginal Matrix as per values given by user:\n");
    for(x = 0; x < 3; x++) {
        for(y = 0; y <3; y++) {
            printf("%d\t", mat[x][y]);
        }
        printf("\n");
    }
    
    // Display transpose of the matrix
    printf("\nTranspose of the Matrix:\n");
    for(x = 0; x < 3; x++) {
        for(y = 0; y <3; y++) {
            printf("%d\t", transpose[x][y]);
        }
        printf("\n");
    }
    
    return 0;
}
