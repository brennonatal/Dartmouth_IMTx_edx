/* You work for the IBP (International Bureau of Procrastination). You've been asked how much time is left until the official day of procrastination (March 25th).

Given that you've been asked on March 23rd, please write a C-program which performs arithmetic in order to produce the following output:

Dear Procrastinator,
You still have to wait for X days (Y minutes or Z seconds) before you can procrastinate!
Here, X is the remaining number of days (25-23), Y is the number of minutes (60 * 24 * X) and Z is the number of seconds (60 * Y). The sentence has to be exactly the one displayed above, replacing X, Y and Z with the computed values. The format has to be followed precisely.

Warning: You cannot simply perform these calculations yourself and print the values - your program must calculate them and print them using the %d format specifier. */

#include <stdio.h>

int main(void)
{
    printf("Dear Procrastinator,\n");
    printf("You still have to wait for %d days (%d minutes or %d seconds) before you can procrastinate!", (25 - 23), (60 * 24 * (25 - 23)), (60 * (60 * 24 * (25 - 23))));

    return 0;
}
