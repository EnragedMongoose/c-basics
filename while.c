#include <stdio.h>

int entry;
int main(void) 
{
    scanf(" %d", &entry);
    while(entry == 1) 
    {   
        printf("\nInput here\n");
        scanf(" %d", &entry);
        printf("\n");
        if (entry == 1) {
            printf("Sucess!");
        }
    }
    printf("Goodbye\n");
    return 0;
}