/*  Q1. Basic Practice [6 Marks]
 Write a program to input n integers into an array and perform the following using loops:
 (a) Find the largest and smallest number. [2 Marks]
 (b) Calculate the average of all numbers. [2 Marks]
 (c) Count how many numbers are even and how many are odd. [2 Marks]   /*


#include <stdio.h>

int main() {
    int num, b[100], i;
    int l, s;
    float avg;
    int sum = 0,count=0,ocount=0;
      // we will ask the user to input the total count of numbers that he wants to compare after that
    printf("Enter the count of numbers you want to check: ");
    scanf("%d", &num);

    // Ask the user to input the numbers
    printf("Enter %d numbers: \n", num);
    for (i = 0; i < num; i++) {
        // in the for loop starting from 0 location the numbers will be assigned to the locations untill the total count of numbers that user has given
        scanf("%d", &b[i]);
    }

   // we will now use the b[0] as the largest and smallest number so that from that we can compare the other numbers
    l = b[0];
    s = b[0];

// if the number at location 1 is greater than the number at location 0 than that value will be assigned to that location.
    for (i = 1; i < num; i++) {
        if (b[i] > l) {
            l = b[i];
        }
        // we will be using 2 if loop because one will capture the largest number and the other one smaller one otherwise we would have used else if
        if (b[i] < s) {
            // if the number at location 1 is smaller than the number at location 0 than that value will be assigned to that location.
            s = b[i];
        }
    }

    // Calculate the sum of the numbers
    for (i = 0; i < num; i++) {
        sum =sum+b[i];
    }
      // Calculate the average 
    avg = sum / num;
    
    for(i=0;i<num;i++)  // we will loop the whole numbers to check the condition for even and odd
    {
        if(b[i]%2==0)  // if the number starting from location 0 is divible by 2 than the counter 
                     // will be increased by 1 
        {
            count++;
        }
        if(b[i]%2!=0)
        {   // i had used variable ocount to count the odd numbers in the numbers we entered 
            ocount++;
            
        }
        
    }
    
    

    // now, after the whole calculation we will print out the result
    printf("The largest number is: %d\n", l);
    printf("The smallest number is: %d\n", s);
    printf("The average of the numbers is: %.2f\n", avg);
    printf("The count of even number is: %d \n",count);
   printf("The count of odd number is: %d \n",ocount);

    return 0;
}
