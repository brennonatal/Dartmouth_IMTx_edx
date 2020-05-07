
#include <stdio.h>
void sumThree(int *);
int main()
{
    int a;
    scanf("%d", &a);
    sumThree(&a);
    printf("a is %d inside main func()\n", a);
}

void sumThree(int * a)
{
    *a += 3;
}