#include <stdio.h>

void behind(int *, int);

int main(void)
{
    int array[10];
    int N, i;

    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &array[i]);
    }
    behind(array, N);
    for (i = 0; i < N; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}

void behind(int *ptr, int n)
{
    int highScore = 0;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        if (ptr[i] > highScore)
        {
            highScore = ptr[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        ptr[i] = highScore - ptr[i];
    }
}
