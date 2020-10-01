//==============================================
// Name:  Navdeep Vird        
// Student Number: 166485193
// Email:          nvirdi2@myseneca.ca
// Section:        NAA
// Workshop:       2 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

// Start your code below:


#include <stdio.h>
#define NUMS 3   //opening the variables 

int main(void)

{
   //all of the int variables are set to equal 0 so when the program run it will start at 0
    int low = 0;   
    int high = 0;
    int i = 0;

    printf("---=== IPC Temperature Analyzer ===---\n");  //output statement 1

    for(i=0; i < NUMS; i++)  //for loop
    {
        do //do loop 
        {
            printf("Enter the high value for day %d: ", i + 1);   // i counts up for days 
            scanf("%d", &high);
            printf("\n");
            printf("Enter the low value for day %d: ", i + 1);  // i counts up for days 
            scanf("%d", &low);
            printf("\n");
            i++;
            if (!(high > low && high <= 40 && low >= -40))
            {
                printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");  //output statement 2
                printf("\n"); 
                i --;   // the i-- will make it so it won't skip a day if the statement is not true
            }
        } while (NUMS> i);

    }
    return 0;
}
