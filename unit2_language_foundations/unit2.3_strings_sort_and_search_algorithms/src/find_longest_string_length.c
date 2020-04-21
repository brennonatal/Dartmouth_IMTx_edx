
/*
Your job is to find the length of the longest word in a text
with no punctuation or special characters of any kind - only
contains words. To do so, please write a C-program that takes
as a input first the number of words in a text, followed by
all of the words in the text. The output of your program
should be the length of the longest word in the text.
To simplify your program, you can assume that the longest
word will not exceed 100 characters.
*/

#include <stdio.h>

int main(void)
{
    int nbWords = 0;
    int i = 0;
    int l = 0;
    int maxLetters = 0;
    char words[100];
    
    scanf("%d", &nbWords);
    for (i = 0; i < nbWords; i++)
    {
        scanf("%s", words);
        l = 0;
        while (words[l] != '\0')
        {
            l++;
        }
        if (l > maxLetters)
        {
            maxLetters = l;
        }
    }
    printf("%d", maxLetters);
    return 0;
}