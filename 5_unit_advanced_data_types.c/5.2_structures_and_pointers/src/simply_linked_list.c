#include <stdio.h>
#include <stdlib.h>
// MY code
struct point
{
    int x;
    int y;
    struct point *next;
};

struct point *createPoint(int x, int y);
struct point *append(struct point *end, struct point *newpt);
void printPoints(struct point *start);
void freePoints(struct point *start);

int main(void)
{
    struct point *start, *end, *newpt;
    int num = 0, i = 0;
    int x = 0, y = 0;

    printf("How many pointers would ypou like in you list? ");
    scanf("%d", &num);

    for (i = 0; i < num; i++)
    {
        printf("Enter the x of your %d element ", i);
        scanf("%d", &x);
        printf("Enter the y of your %d element ", i);
        scanf("%d", &y);
        newpt = createPoint(x, y);
        if (i == 0)
        {
            start = end = newpt;
        }
        else
        {
           end = append(end, newpt);
        }
    }
    printf("Your points: \n");
    printPoints(start);
    freePoints(start);

    return 0;
}

void freePoints(struct point *start)
{
    struct point *aux = start;
    while (aux != NULL)
    {
        start = aux;
        aux = aux->next;
        free(start);
    }
}

void printPoints(struct point *start)
{
    struct point *aux = start;

    while (aux != NULL)
    {
        printf("(%d, %d)\n", aux->x, aux->y);
        aux = aux->next;
    }
}

struct point *append(struct point *end, struct point *newpt)
{
    end->next = newpt;
    return(end->next);
}

struct point *createPoint(int x, int y)
{
    struct point *ptr;
    ptr = (struct point *)malloc(sizeof(struct point));
    ptr->x = x;
    ptr->y = y;
    ptr->next = NULL;
    return (ptr);
}