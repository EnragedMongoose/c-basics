#include <stdio.h>
int operator_logic(float number);
int number_logic(char);
int clear_logic();
int power_off();
char operator;
float number;
float number_state_1;
float number_state_2;
int main(void) 
{
    printf("This basic calculator only has +, -, *, / functionality. \n");
    number_logic(operator);
    operator_logic(number);
    printf(" %f", number_state_2);
    return 0;

}


int operator_logic(float number)
{
    printf("Now here. \n");
    if (number_state_2 > 0 ) {
    printf(" %f", number_state_2);
}
    if (number_state_1 == 0) {
    scanf(" %c", &operator);
    number_state_1 = number;
} else {
switch(operator) {
        case '+':
            number_state_2 = number_state_1 + number;
            return number_state_2; 
        case '-':
            number_state_2 = number_state_1 - number;
            return number_state_2;
        case '*':
            number_state_2 = number_state_1 * number;
            return number_state_2;
        case '/':
            number_state_2 = number_state_1 / number;
            return number_state_2;
        default:
            printf("Not a valid operator\n");
            operator_logic(number);
}

    return number_logic(operator);

}
}
int number_logic(char operator)
{
    printf("You are here  \n");
    scanf(" %f", &number);
    return operator_logic(number);

}
