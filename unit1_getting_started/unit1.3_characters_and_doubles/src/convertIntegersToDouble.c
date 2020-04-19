/* You are helping a teacher average grades. You get bored computing averages by hand, so you decide to write a computer program to do the work for you.

Your program must first read an integer indicating the number of grades to be averaged. Next, your program will read the grades one by one, all of which are integers as well. 
Finally, your program will calculate and print the average of the grades to two decimal places.

Example
Input:
4
10
8
16
9
Output:
10.75
Warning: You will be graded on your output, so do not include any print statements that prompt a user for input. */

#include <stdio.h>

int main(void)
{
    int numberOfGrades = 0;
    int grade = 0;
    double total = 0;
    double avg = 0;
    scanf("%d", &numberOfGrades);
    int i = 0;
    for (i = 0; i < numberOfGrades; i++)
    {
        scanf("%d", &grade);
        total += (double)grade;
    }
    avg = total / numberOfGrades;
    printf("%.2lf", avg);

    return 0;
}
