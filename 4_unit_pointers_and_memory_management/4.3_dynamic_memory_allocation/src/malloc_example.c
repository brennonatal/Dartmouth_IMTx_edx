#include <stdlib.h>
#include <stdio.h>
double findAvg(double *, int);
double *allocateDoubleArray(int);
int main()
{
    int numberOfGrades, index;
    double avg;
    double *whereDoesMyArrayStart;
    printf("How many grades?\n");
    scanf("%d", &numberOfGrades);
    whereDoesMyArrayStart = allocateDoubleArray(numberOfGrades);
    printf("My array is at: %p\n", whereDoesMyArrayStart);
    for (index = 0; index < numberOfGrades; index++)
    {
        scanf("%lf", whereDoesMyArrayStart + index);
    }
    avg = findAvg(whereDoesMyArrayStart, numberOfGrades);
    printf("The average grade is: %.2f\n", avg);
    free(whereDoesMyArrayStart);
    return 0;
}

double findAvg(double *whereDoesMyArrayStart, int numberOfGrades)
{
    int i;
    double avg;
    for (i = 0; i < numberOfGrades; i++)
    {
        avg += *(whereDoesMyArrayStart + i);
    }
    return avg / numberOfGrades;
}
double *allocateDoubleArray(int numberOfGrades)
{
    return (double *)malloc(numberOfGrades * sizeof(double));
}