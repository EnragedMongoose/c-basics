# include<stdio.h>
int input;
int entry1, entry2;
char op;
int answer;
int report_answer(int answer);
int main(void) 
{
    printf("This calculator only has + - * / \n");
    while(1) 
    {
        scanf(" %d", &entry1);
        scanf(" %c", &op);
        scanf(" %d", &entry2);
        int report_answer(int answer);
switch(op) 
    {
        case '+':
            answer = entry1 + entry2;
            return report_answer(answer);
        case '-':
            answer = entry1 - entry2;
            return report_answer(answer); 
        case '*':
            answer = entry1 * entry2;
            return report_answer(answer);
        case '/':
            answer = entry1 / entry2;
            return report_answer(answer);
        case 'x':
            printf("Exiting calculator");
            break; 
    }
}  return 0; 
}
int report_answer(int answer)
{
    printf("%d\n", answer);
    return 1;
}
