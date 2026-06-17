# include<stdio.h>
int input;
int num1, num2, entry1, entry2;
char op;
int answer;
int calc_logic(int entry1, int entry2);
int main(void) 
{
    printf("This calculator only has + - * / \n");
    while (1) {
        scanf(" %d", &entry1);
        scanf(" %d", &entry2);
        
        answer = calc_logic( entry1, entry2);
        printf("The answer is %d\n", answer);
    }
    return 0;
}

int calc_logic(int entry1, int entry2)
{
    int answer = entry1 + entry2;
    return answer;
    
}