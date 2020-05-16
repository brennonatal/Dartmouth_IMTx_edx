
/*
You are still conducting linguistic research! This time, you'd 
like to write a program to find out how many letters occur multiple 
times in a given word. Your program should read a word from the 
input and then sort the letters of the word alphabetically (by their ASCII codes). 
Next, your program should iterate through the letters of the word and compare 
each letter with the one following it. If these equal each other, you increase 
a counter by 1, making sure to then skip ahead far enough so that letters that 
occur more than twice are not counted again. You may assume that the word you 
read from the input has no more than 50 letters, and that the word is all lowercase.
*/

#include <stdio.h>

int main(void)
{
    int counter = 0, l = 0, i = 0, j = 0;
    char word[51];
    char swap;

    scanf("%s", word);
    while (word[l] != '\0')
    {
        l++;
    }
    for (j = 0; j < l - 1; j++)
    {
        for (i = 0; i < l - 1; i++)
        {
            if (word[i] > word[i + 1])
            {
                swap = word[i];
                word[i] = word[i + 1];
                word[i + 1] = swap;
            }
        }
    }
    j = 0;
    while (j < l - 1)
    {
        if (word[j] == word[j + 1])
        {
            counter++;
            while (word[j + 1] == word[j + 2])
            {
                j++;
            }
        }
        j++;
    }
    printf("%d", counter);
    return 0;
}