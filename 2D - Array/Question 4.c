/*  Q4. Matrix Operations [8 Marks]
 Write a program to input two 3×3 matrices. Perform and display:
 (a) Matrix addition [2 Marks]
 (b) Matrix subtraction [2 Marks]
 (c) Matrix multiplication [4 Marks] */

 #include <stdio.h>

int main() {
    int mat1 [3] [3], mat2 [3] [3];
    int addition [3] [3], subtract [3] [3], multiply [3] [3];
    int x, y, z;
    
    // We will first Input values for first matrix
    printf("Enter Elements of First 3x3 Matrix:\n");
    for(x = 0; x < 3; x++) {
        for(y = 0; y < 3; y++) {
            printf("Enter Element [%d][%d]:\n", x+1, y+1);
            scanf("%d", &mat1[x][y]);
        }
    }
    
    //Then we will Input values for second matrix
    printf("\nEnter Elements of Second 3x3 Matrix:\n");
    for(x = 0; x < 3; x++) {
        for(y = 0; y < 3; y++) {
            printf("Enter Element [%d][%d]:\n", x+1, y+1);
            scanf("%d", &mat2[x][y]);
        }
    }
    
    // Addition of mat1 and mat2
    for(x = 0; x < 3; x++) {
        for(y = 0; y < 3; y++) {
           addition[x][y] = mat1[x][y] + mat2[x][y];
        }
    }
    
    // Subtraction of mat1 and mat2
    for(x = 0; x < 3; x++) {
        for(y = 0; y < 3; y++) {
            subtract[x][y] = mat1[x][y] - mat2[x][y];
        }
    }
    
    // Multiplication of mat1 and mat2
    for(x = 0; x < 3; x++) {
        for(y = 0; y < 3; y++) {
            multiply[x][y] = 0;
            for(z = 0; z < 3; z++) {
                multiply[x][y] = multiply[x][y] + (mat1[x][z] * mat2[z][y]);
            }
        }
    }
    
    // Displays first matrix
    printf("\nFirst Matrix:\n");
    for(x = 0; x < 3; x++) {
        for(y = 0; y < 3; y++) {
            printf("%d\t", mat1[x][y]);
        }
        printf("\n");
    }
    
    // Displays second matrix
    printf("\nSecond Matrix:\n");
    for(x = 0; x < 3; x++) {
        for(y = 0; y < 3; y++) {
            printf("%d\t", mat2[x][y]);
        }
        printf("\n");
    }
    
    // Displays addition 
    printf("\nAddition of Matrices:\n");
    for(x = 0; x < 3; x++) {
        for(y = 0; y < 3; y++) {
            printf("%d\t",addition[x][y]);
        }
        printf("\n");
    }
    
    // Displays subtraction 
    printf("\nSubstraction of Matrices:\n");
    for(x = 0; x < 3; x++) {
        for(y = 0; y < 3; y++) {
            printf("%d\t",subtract[x][y]);
        }
        printf("\n");
    }
    
    // Displays multiplication 
    printf("\nMultiplication of Matrices:\n");
    for(x = 0; x < 3; x++) {
        for(y = 0; y < 3; y++) {
            printf("%d\t",multiply[x][y]);
        }
        printf("\n");
    }
    
    return 0;
}
