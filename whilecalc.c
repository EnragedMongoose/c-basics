# include<stdio.h>
int input;
int num1, num2;
char op;
int answer;
int main(void) 
{
    printf("This calculator only has + - * / \n");
    while(1) {
    scanf(" %d", &num1);
    switch(op)
{
    case '+':
    answer = num1 + num2;
    printf(" %d", answer);
    case '-':
    answer = num1 - num2;
    return answer;
    case '*':
    answer = num1 * num2;
    return answer;
    case '/':
    answer = num1 / num2;
    return answer;
}
}
}
