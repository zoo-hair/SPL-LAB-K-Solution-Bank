/*
11) Program that will take the final score of a student in a particular subject as input and find his/her grade. 
*/
#include<stdio.h>
int main(void)
{
    float marks;

    printf("Enter your marks: ");
    scanf("%f", &marks);

    if(marks > 89 && marks <= 100)
    printf("Grade: A\n");
    else if(marks > 85 && marks <= 89)
    printf("Grade: A-\n");
    else if(marks > 81 && marks <= 85)
    printf("Grade: B+\n");
    else if(marks > 77 && marks <= 81)
    printf("Grade: B\n");
    else if(marks > 73 && marks <= 77)
    printf("Grade: B-\n");
    else if(marks > 69 && marks <= 73)
    printf("Grade: C+\n");
    else if(marks > 65 && marks <= 69)
    printf("Grade: C\n");
    else if(marks > 61 && marks <= 65)
    printf("Grade: C-\n");
    else if(marks > 57 && marks <= 61)
    printf("Grade: D+\n");
    else if(marks >= 55 && marks <= 57)
    printf("Grade: D\n");
    else if(marks < 55)
    printf("Grade: F\n");
    else
    printf("Return marks between 0-100\n");

    return 0;
}