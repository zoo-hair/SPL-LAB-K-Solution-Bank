/*
7) Write a program (WAP) that will run and show keyboard inputs until the user types an ’A’ at the keyboard. 
*/
#include <stdio.h>

int main(void) 
{
    char c;
    int i = 1;

    while (1) 
    { // Infinite loop until 'A' is entered
        //printf("Enter a character: ");
        scanf(" %c", &c); // Note the space before %c to skip any leftover whitespace

        printf("Input %d: %c\n", i, c);
        i++;

        if (c == 'A') 
        {
            break; // Stop if 'A' is entered
        }
    }

    return 0;
}

