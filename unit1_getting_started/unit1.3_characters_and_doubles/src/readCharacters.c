/* Write a C-program that reads an input character (using scanf) and displays the following pyramid pattern using the character read: 

Examples
Input
#
Output
++++#++++
+++###+++
++#####++
+#######+
######### */

#include <stdio.h>

int main(void)
{
    char letter;
    scanf("%c", &letter);

    int i = 0;
    char plus = '+';
    int iPlus = 4;
    int j = 0;
    int iChar = 1;

    for (j = 1; j <= 5; j++)
    { //pyramid loop

        for (i = 0; i < iPlus; i++)
        {
            printf("%c", plus);
        }

        for (i = 1; i <= iChar; i++)
        {
            printf("%c", letter);
        }

        for (i = 0; i < iPlus; i++)
        {
            printf("%c", plus);
        }
        iPlus = iPlus - 1;
        iChar += 2;
        printf("\n");
    }

    return 0;
}
