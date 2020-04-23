
/*
A delivery company has hired you to manage their tracking
services division. It is your job to store all of the currently 
used tracking codes in the company's database. These codes consist 
of either all integers, all decimal numbers, or all characters. 
The chief technology officer has warned you that the database is 
old and has limited space, so you want to determine how much 
memory the tracking codes will occupy before storing them. You 
decide to write a program to assist you in this process. 
Your program should first read an integer number indicating 
how many tracking codes you plan on entering. Next, for each 
successive tracking code your program should read in the integer 
length of code followed by a space and then the type of code ('i' 
for integer, 'd' for decimal, or 'c' for character). Finally your 
program should print the total amount of space required to store 
all of the tracking codes (in bytes). If the user enters an 
incorrect type for any tracking number, the program should print 
'Invalid tracking code type' and exit.
*/

#include <stdio.h>
int sizeOf(int, char);
int main(void)
{
    int n = 0;
    int i = 0;
    int total = 0;
    int nb = 0;
    int check = -10;
    char type = '\0';

    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d %c", &nb, &type);
        check = sizeOf(nb, type);
        if (check == 0)
        {
            total = 0;
            break;
        }
        else
        {
            total += sizeOf(nb, type);
        }
    }
    if (total != 0)
    {
        printf("%d bytes", total);
    }
    else
    {
        printf("Invalid tracking code type");
    }

    return 0;
}

int sizeOf(int n, char type)
{ //('i' for integer, 'd' for decimal, or 'c' for character)
    int size = 0;
    if (type == 'i')
    {
        return n * sizeof(int);
    }
    else if (type == 'd')
    {
        return n * sizeof(double);
    }
    else if (type == 'c')
    {
        return n * sizeof(char);
    }
    else
    {
        return 0;
    }
}