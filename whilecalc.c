# include<stdio.h>
int input;
int entry1, entry2, entry3;
char op;
int answer;
int last_answer;
int previous_answer;
int main(void) 
{
    int looping = 1;
    printf("This calculator only has + - * / \n");
    while(looping) 
    {   
            printf("Start of loop: \n");
            if ( previous_answer != 0) {
                scanf(" %c", &op);
            } else {
                scanf(" %d", &entry1);
                scanf(" %c", &op);
            }
switch(op)
    { 
        case '+':
            if (previous_answer == 0) {
                scanf(" %d", &entry2);
                answer = entry1 + entry2;
                printf("%d\n", answer); 
            } else {
                scanf(" %d", &entry3);
                answer = previous_answer + entry3;
                printf("%d\n", answer);
            }
            break;
        case '-':
            if (previous_answer == 0) {
                scanf(" %d", &entry2);
                answer = entry1 - entry2;
                printf("%d", answer);
            } else {
                scanf(" %d", &entry3);
                answer = previous_answer - entry3; 
                printf("%d\n", answer);
            }
            break;
        case '*':
            if (previous_answer == 0) {
                scanf(" %d", &entry2);
                answer = entry1 * entry2;
                printf("%d\n", answer);
            } else {
                scanf(" %d", &entry3);
                answer = previous_answer * entry3;
                printf("%d\n", answer);
            }
            break;
        case '/':
            if (previous_answer == 0) {
                scanf(" %d", &entry2);
                answer = entry1 / entry2;
                printf("%d", answer);
            } else {
                scanf(" %d", &entry3);
                answer = previous_answer / entry3;
                printf("%d\n", answer);
            }
            break;
        }   previous_answer = answer;
    }
}


