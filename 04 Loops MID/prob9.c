/*
Write a program (WAP) that will find the grade of N students. 
For each student, it will take the marks of his/her the attendance (on 5 marks), assignment (on 10 marks), class test (on 15 marks), midterm (on 50 marks), term final (on 100 marks). 
Then based on the tables shown below, the program will output his grade
*/
#include <stdio.h>

int main(void) {
    int n;
    float a, hw, ct, mt, tf, marks;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter marks separated by space (Attendance, Assignment, Class Test, Midterm, Term Final): ");
        scanf("%f %f %f %f %f", &a, &hw, &ct, &mt, &tf);

        marks = a + hw + ct + mt + tf;

        printf("Student %d: ", i);
        if (marks > 89)
            printf("A\n");
        else if (marks > 85)
            printf("A-\n");
        else if (marks > 81)
            printf("B+\n");
        else if (marks > 77)
            printf("B\n");
        else if (marks > 73)
            printf("B-\n");
        else if (marks > 69)
            printf("C+\n");
        else if (marks > 65)
            printf("C\n");
        else if (marks > 61)
            printf("C-\n");
        else if (marks > 57)
            printf("D+\n");
        else if (marks >= 55)
            printf("D\n");
        else  // FIXED: Changed `else if (marks < 55)` to just `else`
            printf("FAIL\n");
    }

    return 0;
}
