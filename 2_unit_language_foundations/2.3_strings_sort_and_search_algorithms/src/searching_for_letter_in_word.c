
/*
You are conducting a linguistic study and are interested in 
finding words that contain the letter 't' or 'T' in the first 
half of the word (including the middle letter if there is one). 
Specifically, if the first half of the word does contain a 't' 
or a 'T', your program should output a 1. If the first half 
does not contain the letter 't' or 'T', but the second half 
does, then your program should output a 2. Otherwise, if there 
is no 't' or 'T' in the word at all, your program's output 
should be -1. You may assume that the word entered does not 
have more than 50 letters.
*/

#include <stdio.h>

int main(void)
{
    int i = 0, l = 0, j = 0;
    char word[51];
    int found = 0;

    scanf("%s", word);
    while (word[l] != '\0') // Calculates the word length
    {
        l++; 
    }
    int firstHalf = l / 2;
    if (firstHalf % 2 != 0)
    {
        firstHalf++;
    }
    for (i = 0; i < firstHalf; i++)
    {
        if (word[i] == 'T' || word[i] == 't')
        {
            found = 1;
        }
    }
    j = firstHalf + 1;
    while(j < l && found != 1)
    {
        if (word[j] == 'T' || word[j] == 't')
        {
            found = 2;
        }
        else
        {
            found = -1;
        }
        j++;
    }

    printf("%d", found);
    return 0;
}