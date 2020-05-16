 
//Create a program that displays on the screen a square of n x n stars, with the integer n given as an input.

#include <stdio.h>

int main(void)
{
    int n = 0;
    scanf("%d", &n);
    int i = 0;
    int j = 0;
    char star = '*';

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%c", star);
        }
        printf("\n");
    }
    return 0;
}