/*
4)Program that will check whether a triangle is valid or not, when the three angles (angle value should be such that, 0 < value < 180) of the triangle are entered through the keyboard. 
[Hint: A triangle is valid if the sum of all the three angles is equal to 180 degrees.]
*/
#include<stdio.h>
int main(void)
{
    float ang1, ang2, ang3, sum;

    printf("Enter three angles with spaces in between: ");
    scanf("%f %f %f", &ang1, &ang2, &ang3);
    
    if ((ang1 > 0 && ang1 < 180) && (ang2 > 0 && ang2 < 180) && (ang3 > 0 && ang3 < 180))
    {
        sum = ang1 + ang2 + ang3;

        if(sum == 180)
        printf("Valid Traingle\n");
        else
        printf("Invalid Triangle\n");
    }
    else 
    printf("Invalid Triangle\n");

    return 0;
}