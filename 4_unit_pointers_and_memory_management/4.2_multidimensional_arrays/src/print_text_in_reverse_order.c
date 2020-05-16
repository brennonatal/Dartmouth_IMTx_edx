#include <stdio.h>

int main(void)
{
    int i = 0;
    char text[68][41];

    for (i = 0; i < 68; i++)
    {
        scanf("%s", text[i]);
    }

    for (i = 67; i >= 0; i--)
    {
        printf("%s ", text[i]);
    }
}