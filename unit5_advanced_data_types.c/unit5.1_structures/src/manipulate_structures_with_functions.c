
/*
In this problem you will continue developing the
data feature which you started implementing in the 
previous problem. You will implement a "tomorrow" 
feature in the C programming language via a function 
called "advanceDay()". The function advanceDay() should 
take as input a date (stored in a struct date) and return 
the date of the following day. You do not have to take into 
account leap years (although you may if you wish to). That is, it 
is okay for your function to always return March 1 as the day 
following February 28, no matter the year.
You are provided with a familiar date structure definition, a main 
function as well as the function prototypes for the readDate(), 
printDate(), and advanceDate() functions. Do not modify any of 
the given code. Simply add your function definitions underneath 
the main() function. For the readDate() and printDate() functions 
you may simply copy and paste the code you developed in the previous task.
*/

#include <stdio.h>

struct date
{
    int year;
    int month;
    int day;
};

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date);

int main(void)
{
    struct date today, tomorrow;
    printf("Please, enter today's date: \n");
    readDate(&today);
    printf("Today is ->");
    printDate(today);
    tomorrow = advanceDay(today);
    printf("Tomorrow's date ->");
    printDate(tomorrow);
    return 0;
}

/* add your function definitions here */
void readDate(struct date *dt)
{
    printf("Year: ");
    scanf("%d", &(*dt).year);
    printf("Month: ");
    scanf("%d", &(*dt).month);
    printf("Day: ");
    scanf("%d", &(*dt).day);
}
void printDate(struct date dt)
{
    printf("%02d/", dt.month);
    printf("%02d/", dt.day);
    printf("%04d\n", dt.year);
}
struct date advanceDay(struct date today)
{
    if (today.day == 31 && today.month == 12)
    {
        today.month = 1;
        today.day = 1;
        today.year += 1;
    }
    else if (today.day == 30 && (today.month == 4 || today.month == 6 || today.month == 9 || today.month == 11))
    {
        today.month += 1;
        today.day = 1;
    }
    else
    {
        today.day += 1;
    }
    return today;
}