/* Write a C-program that displays the following:

Programming in C
using this printf statement:

printf ("Programming %c%c %c\n", letter1, letter2, letter3);
Warning: do not use a scanf statement in this exercise! */

#include <stdio.h>

int main(void)
{
    char letter1 = 'i'; //can't use ""
    char letter2 = 'n';
    char letter3 = 'C';

    printf("Programming %c%c %c\n", letter1, letter2, letter3);

    return 0;
}
