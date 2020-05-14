#include <stdio.h>

struct student
{
    char firstName[30];
    char lastName[30];
    int age;
};

int main(void)
{
    struct student me = {"Brenno", "Natal", 20};
    printf("Hello, my name is %s %s and I am %d years old.", me.firstName, me.lastName, me.age);
    return 0;
}
