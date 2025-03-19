/*
12) Program that will construct a menu for performing arithmetic operations. 
The user will give two real numbers (a, b) on which the arithmetic operations will be performed and an integer number (1 <= Choice <= 4) as a choice. Choice-1, 2, 3, 4 are for performing addition, subtraction, multiplication, division (quotient) respectively.
*/
#include<stdio.h>
int main(void)
{
    float num1, num2;
    int choice;

    printf("Enter two real numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("1)Addition      \t2)Subtraction\n3)Multiplication\t4)Division(Quotient)\n");
    printf("Enter your choice from 1 to 4: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case(1):
        printf("Addition: %.2f\n", num1 + num2);
        break;
        case(2):
        printf("SUbtraction: %.2f\n", num1 - num2);
        break;
        case(3):
        printf("Multiplication: %.2f\n", num1 * num2);
        break;
        case(4):
        {
        if(num2 != 0)
        printf("Quoteint: %.2f\n", num1 / num2);
        else
        printf("Divisor can't be zero\n");
        break;
        }
        default:
        printf("Enter numbers between 1 to 4\n");
    }
    return 0;
}