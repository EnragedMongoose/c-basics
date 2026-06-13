#include <stdio.h>
// printf("got here, entry = %c\n", entry);
char entry; 
float sum, difference, product, quotient, num1, num2, answer, again;
int menu_logic();
char play_again();
int main(void) 
{
    menu_logic();
    printf("%.2f\n", answer);
    play_again();
    return 0;
}



int menu_logic()
{

    printf("Choose operation: +, -, *, or /  ");
    scanf("%c", &entry); 
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    switch (entry) {
        case '+':
            answer = num1 + num2;
            return answer;
        case '-':
            answer = num1 - num2;
            return answer;
        case '*':
            answer = num1 * num2;
            return answer;
        case '/':
            answer = num1 / num2;
            return answer;
        default:
            printf("Unknown operator\n");
} return 0;
}
char play_again() 
{
    printf("Do you wish to perform another operation? 1 for yes, 2 for no.   ");
    scanf("%f", &again);
    if (again == 1){ 
    menu_logic(); 
}   return 0;
}
