/* Q3. Frequency Counter using switch-case [5 Marks]
 Write a program to input 10 integers (range 0–9). Store them in an array. Then, using a
 switch-case, print the frequency of each digit. */

#include <stdio.h>
int main(){
    // i had assigned different variables for counting the frequency of different integers
    int a[10],b=0,c=0,d=0,e=0,f=0,g=0,h=0,j=0,k=0,l=0,num,i;
    printf("Enter the integers: ");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    // looping them all 
    for(i=0;i<10;i++)
    {// putting the condition that the integer should be between 0-9
    if(a[i]>=0 && a[i]<=9){
        switch(a[i]){
            case 0:
            b++;
            break;
            
            case 1:
            c++;
            break;
            
            case 2:
            d++;
            ;
            break;
            case 3:
            e++;
          
            break;
            case 4:
            f++;
      
            break;
            case 5:
            g++;
            
            break;
            case 6:
            h++;
          
            break;
            case 7:
            j++;
        
            break;
            case 8:
            k++;
            
            break;
            case 9:
            l++;
          
            break;
            
        }
        
    }
    }
    printf("Frequency of 0 is %d\n",b);
    printf("Frequency of 1 is %d\n",c);
    printf("Frequency of 2 is %d\n",d);
    printf("Frequency of 3 is %d\n",e);
    printf("Frequency of 4 is %d\n",f);
    printf("Frequency of 5 is %d\n",g);
    printf("Frequency of 6 is %d\n",h);
    printf("Frequency of 7 is %d\n",j);
    printf("Frequency of 8 is %d\n",k);
    printf("Frequency of 9 is %d\n",l);
    return 0;
}
