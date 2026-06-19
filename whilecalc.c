# include<stdio.h>
int input;
int entry1, entry2;
char op;
int answer;
int last_answer;
int report_answer(int answer);
int main(void) 
{
    int looping = 1;
    printf("This calculator only has + - * / \n");
    while(looping) 
    {   
        scanf(" %d", &entry1);
        scanf(" %c", &op);
        scanf(" %d", &entry2);
        printf("\n");
switch(op)
    {
        
        case '+':
            answer = entry1 + entry2;
            printf("%d\n", answer);
            break;
        case '-':
            answer = entry1 - entry2;
            printf("%d\n", answer);
            break;
        case '*':
            answer = entry1 * entry2;
            printf("%d\n", answer);
            break;
        case '/':
            answer = entry1 / entry2;
            printf("%d\n", answer);
            break;
        case 'x':
            printf("Exiting calculator");
            looping = 0;
            break; 
    }
    
} 
return answer;   
}
