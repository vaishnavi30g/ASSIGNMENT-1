/* Q2. Element Search with Operators [4 Marks]
 Write a program to input n integers in an array. Ask the user for a number and check if
 it exists in the array using the ternary operator. Print "Found" or "Not Found". */


#include <stdio.h>

int main() {
    int a[100],num,i,b;
    int v;
    // firstly we will ask the user to input the total number he wants to search
    printf("Enter the total numbers you want to write: ");
    scanf("%d",&num);
    // now we will aske the user to input the numbers that we will put down in array one by one using for loop
    printf("Enter the %d numbers.\n",num);
    for(i=0;i<num;i++){
        scanf("%d",&a[i]);
    }
    // ask the user to input the number they want to check for
    printf("Enter the number to check: ");
    scanf("%d",&b);
    // using the ternary operator to check if the value by user matches the other values
    for(i=0;i<num;i++)
    {
        if(b==a[i])  // using this condition
        {
            v=1; // assigning number 1 to v if the condition matches
            break;  // if it founds the numbers break the loop
        }
       
    }
    if(v==1)  // if the variable v is equal to 1 then print found
             // else not found
    {
            printf("Found\n");
        }
        else
        {
            printf("Not Found");
        }

    return 0;
}
