/* In this activity, you want to improve your existing multiplication program (that prints the 8 times table).
Your program should read an integer from the user (not you) and print the multiplication table for the number that they enter. */

#include <stdio.h>

int main(void)
{
    int number = 0; //codecast initializes all variables as "0" for us but others programs do not.

    // printf("Which number would you like to see the multiplication table of?\n");

    scanf("%d", &number);

    int i = 0;
    for (i = 0; i <= 10; i++)
    {
        printf("%dx%d = %d\n", i, number, number * i);
    }

    return 0;
}
