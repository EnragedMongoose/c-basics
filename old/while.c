#include <stdio.h>

int entry;
int main(void) 
{
    while(1) 
    {   
        printf("Input 1 here\n");
        scanf(" %d", &entry);
        printf("\n");
        if (entry == 1) {
            printf("Sucess!\n");
        }
    }
    printf("Goodbye\n");
    return 0;
}
