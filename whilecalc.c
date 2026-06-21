# include<stdio.h>
int input;
int entry1, entry2, entry3;
char op;
int answer;
int last_answer;
int previous_answer;
int report_answer(int answer);
int main(void) 
{
    int looping = 1;
    int answer = 0;
    int previous_answer = 0;
    printf("This calculator only has + - * / \n");
    while(looping) 
    {   
//        printf("Start of while loop\n");
//        printf("%d", previous_answer);
//        printf("\n");
//        scanf(" %d", &entry1);
//        scanf(" %c", &op);
//        scanf(" %d", &entry2);
        if (previous_answer == 0)
        {
            printf("Start of while loop\n");
            scanf(" %d", &entry1);
            scanf(" %c", &op);
            scanf(" %d", &entry2);
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
    } previous_answer = answer;
        } else {
            scanf(" %c", &op);
            scanf(" %d", &entry3);
switch(op)
    {
        
        case '+':
            previous_answer = previous_answer + entry3;
            printf("%d\n", previous_answer);
            break;
        case '-':
            previous_answer = previous_answer - entry3;
            printf("%d\n", previous_answer);
            break;
        case '*':
            previous_answer = previous_answer * entry3;
            printf("%d\n", previous_answer);
            break;
        case '/':
            previous_answer = previous_answer / entry3;
            printf("%d\n", previous_answer);
            break;
        }
        }
    } 
}
