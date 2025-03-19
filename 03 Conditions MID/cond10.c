/*
10) Program that will evaluate simple expressions of the form-  
<number1>   <operator>   <number2> 
; where operators are (+, - , *, /) 
And if the operator is “/”, then check if <number2> nonzero or not.
*/
#include<stdio.h>
int main(void)
{
    float num1, num2;
    char operator;

    printf("Enter two numbers like <number1>   <operator>   <number2>: ");
    scanf("%f %c %f", &num1, &operator, &num2);

    switch(operator)
    {
        case('+'):
        printf("%.2f\n", num1 + num2);
        break;
        case('-'):
        printf("%.2f\n", num1 - num2);
        break;
        case('*'):
        printf("%.2f\n", num1 * num2);
        break;
        case('/'):
        {
            if (num2 != 0)
            printf("%.2f\n", num1 / num2);
            else
            printf("Zero as divisor is not valid\n");
        }
        break;
        default:
        printf("Enter valid operator\n");
    }
    return 0;
}