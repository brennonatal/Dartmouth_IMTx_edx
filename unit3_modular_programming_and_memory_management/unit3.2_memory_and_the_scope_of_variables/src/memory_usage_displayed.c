/*
You are programming a toaster! The toaster does not have a 
lot of memory, so you need to be careful about the data 
types you use (remember that different data types use different 
amounts of memory). To make this easier, you'd like an easy way 
to track how much memory your variables are going to use.
Your job is to write a program that shows, in human-readable 
form (see below for specifics), how much memory a set of 
variables of a certain type will use. Your program should 
read a character that identifies the data type ('i' for int, 
's' for short, 'c' for char, 'd' for double). Next it should 
read an integer that indicates how many variables of the given 
type you wish to store.
Your program should then calculate the amount of memory 
required to store the given variables. Your program needs 
to be written in such a way that it would also perform 
correctly on other computers. In other words, rather than 
hard-coding specific sizes for the different variable types, 
your program needs to use the "sizeof()" function to determine 
how much memory an individual variable of a given type needs.
Finally, you need to output the amount of space required by 
your variables to the screen. You need to make sure you provide 
this output in a form that is easy to read for humans. The 
following examples illustrate what this means:
*/

#include <stdio.h>
int sizeOf(int, char);
void converting(int);
int main(void)
{
    int num = 0;
    int total = 0;
    char type = '\0';

    scanf("%c %d", &type, &num);

    total = sizeOf(num, type);
    converting(total);
    // printf("%d bytes", total);

    return 0;
}
void converting(int bytes)
{
    int KB = 1000;
    int MB = KB * 1000;
    int GB = MB * 1000;

    if (bytes < 1000)
    {
        printf("%d B", bytes);
        //return 0;
    }
    else if (bytes >= KB && bytes < MB)
    {
        KB = bytes / KB;
        bytes = bytes % 1000;
        printf("%d KB and %d B", KB, bytes);
        //return 0;
    }
    else if (bytes >= MB && bytes < GB)
    {
        MB = bytes / MB;
        KB = bytes % (1000 * 1000);
        KB = KB / 1000;
        bytes = (bytes % (1000 * 1000)) % (1000);

        printf("%d MB and %d KB and %d B", MB, KB, bytes);
        //return 0;
    }
    else if (bytes >= GB)
    {
        GB = bytes / GB;
        MB = bytes % (1024 * 1024 * 1024);
        KB = MB % (1024 * 1024);
        bytes = KB % 1024;
        printf("%d GB and %d MB and %d KB and %d B", GB, MB, KB, bytes);
    }
}
int sizeOf(int n, char type)
{ //('i' for int, 's' for short, 'c' for char, 'd' for double)

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
    else if (type == 's')
    {
        return n * sizeof(short);
    }
    else
    {
        return 0;
    }
}
Í
