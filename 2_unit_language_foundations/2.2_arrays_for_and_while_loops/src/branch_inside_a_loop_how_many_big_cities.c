/* 
You want to determine the number of cities in a given region
 that have a population strictly greater than 10,000. To do 
 this, you write a program that first reads the number of 
 cities in a region as an integer, and then the populations 
*/

#include <stdio.h>

int main(void)
{
    int cities = 0;
    scanf("%d", &cities);
    int population = 0;
    int i = 0;
    int citiesHighlyPopulated = 0;

    for (i = 0; i < cities; i++)
    {
        scanf("%d", &population);
        if (population >= 10000)
        {
            citiesHighlyPopulated++;
        }
    }
    printf("%d", citiesHighlyPopulated);
    return 0;
}