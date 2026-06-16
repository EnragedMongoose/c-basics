#include <stdio.h>

int sum;
int difference;
int product;
int quotient;
int num1;
int num2;
int entry;

int addition();
int subtraction();
int multiplication();
int division();


int main(void)
{
    printf("Hit 1 for addition: \n");
    printf("Hit 2 for subtraction: \n");
    printf("Hit 3 for multiplication: \n");
    printf("Hit 4 for divsion: \n");
    scanf("%d", &entry);
    if (entry == 1)
    { addition();
    printf("%d\n", sum);
    return 0;
}   if (entry == 2)
    { subtraction();
    printf("%d\n", difference);
    return 0;
}   if (entry == 3)
    { multiplication();
    printf("%d\n", product);
    return 0;
}   if (entry == 4)
    { division();
    printf("%d\n", quotient);
    return 0;
}
    printf("Not a valid choice\n");
    return 0;
}


int addition()
{
    printf("Enter first number: ");
    scanf("%d", &num1 );
    printf("Enter second number: ");
    scanf("%d", &num2);
    sum = num1 + num2;
    return sum;
}    

int subtraction()
{
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    difference = num1 - num2;
    return difference; 
}

int multiplication()
{
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    product = num1 * num2;
    return product;
}

int division()
{
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    quotient = num1 / num2;
    return quotient;

}

