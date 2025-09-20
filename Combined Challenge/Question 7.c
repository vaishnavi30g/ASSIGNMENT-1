/* Q7. Student Marks Analysis (Mini Project)
 Assume a class of 5 students, each having marks in 3 subjects. Store the marks in a
 2D array where each row represents a student and each column represents a subject.
 Perform the following:
 (a) Calculate the total and average marks of each student. [4 Marks]
 (b) Find the highest scorer (student with maximum total marks). [3 Marks]
 (c) Find the subject in which the class performed worst (lowest average marks). [4
 Marks]
 (d) Use sizeof() operator to display the total memory consumed by the array. [4
 Marks] */

#include <stdio.h>

int main() {
    int num[5][3];  // 5 students, 3 subjects
    int a, b;

    // Input num
    printf("Enter Marks of 5 students in 3 subjects:\n");
    for(a = 0; a < 5; a++) {
        printf("Marks of Student %d:\n", a+1);
        for(b = 0; b < 3; b++) {
            printf(" Subject %d: ", b+1);
            scanf("%d", &num[a][b]);
        }
    }

    // (a) Total marks of each student is found by using nested for loops as shown
    printf("\nTotal marks of each student:\n");
    for(a = 0; a < 5; a++) {
        int total = 0;
        for(b = 0; b < 3; b++) {
            total += num[a][b];
        }
        printf(" Total marks of Student %d: %d\n", a+1, total);
    }

    // (b) Average marks in each subject again by using nested for loops in arrays
    printf("\nAverage marks in each subject:\n");
    for(b = 0; b < 3; b++) {
        int sum = 0;
        for(a = 0; a < 5; a++) {
            sum += num[a][b];
        }
        printf(" Average marks in Subject %d: %.2f\n", b+1, (float)sum/5);
    }

    // (c) Student with highest total Marks
    int maxTotal = 0, topper = 0;
    for(a = 0; a < 5; a++) {
        int total = 0;
        for(b = 0; b < 3; b++) {
            total += num[a][b];
        }
        if(total > maxTotal) {
            maxTotal = total;
            topper = a;
        }
    }
    printf("\nTopper is Student %d with %d num.\n", topper+1, maxTotal);
    
    // (d)Subject in which class performed worst(lowest num)
    float subjectAverage[3] = {0};
    for (b = 0; b<3 ; b++) {
        for (a = 0; a<5; a++) {
            subjectAverage[b] += num[a][b];
        }
        subjectAverage[b] /= 5.0;
    }
    int worstSubject = 0;
    float minAvg = subjectAverage[0];
    for (b = 1 ; b<3; b++){
        if (subjectAverage[b] < minAvg){
           minAvg = subjectAverage[b];
           worstSubject = b;
        }
    }
    printf("Class performed worst in Subject %d(Average: %.2f)\n",worstSubject +1 , minAvg);
    
    // (e) Memory consumed by the array
    printf("\nTotal memory consumed by num array: %lu bytes\n", sizeof(num));
    
return 0;
    
}
