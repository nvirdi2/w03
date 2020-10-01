#include <stdio.h>
#define NUMS 3
int main(void)
{

    int low = 0;
    int high = 0;
    int i = 0;

    printf("---=== IPC Temperature Analyzer ===---\n");

    for(i=0; i < NUMS; i++)
    {
        do 
        {
            printf("Enter the high value for day %d: ", i + 1);
            scanf("%d", &high);
            printf("\n");
            printf("Enter the low value for day %d: ", i + 1);
            scanf("%d", &low);
            printf("\n");
            i++;
            if (!(high > low && high <= 40 && low >= -40))
            {
                printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
                printf("\n"); 
                i --;
            }
        } while (NUMS> i);

    }
    return 0;
}