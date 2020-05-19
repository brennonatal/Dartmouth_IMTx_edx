/*
In this task you will continue working on the linked list of 
students in which you would like to store, for each student, 
their name and age. As before you are provided with some code 
that you should not modify:
A structure definition for the storage of each student's information.
A main() function to test your code. 
Prototypes for the functions createStudent(), append(), printStudents 
(from previous tasks) and freeStudents() (from the current task).
You will need the function definitions (from previous tasks) for 
createStudent(), append(), printStudents() as well as any other 
functions you added, such as copyStr() for example. If you were 
unable to solve the previous task you have the option to be given
the code for the printStudents() function (see the quiz preceding 
this task) so that you can work on the current task.
Your current task is to write a function freeStudents() which takes 
as input a pointer that holds the address of the start of a linked list 
of students. Your function should then free the space allocated for each 
student in this list of students. Your function should not return anything.
*/

#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[50];
    int age;
    struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
struct student *append(struct student *end, struct student *newStudptr);
void printStudents(struct student *start);
void freeStudents(struct student *start);
/* add any other prototypes as needed */
void copyStr(char *source, char *target);

int main(void)
{
    struct student *start, *newStudptr, *end;
    int ageP, ageR, ageM;

    scanf("%d %d %d", &ageP, &ageR, &ageM);

    start = createStudent("Petra", ageP);
    end = start;
    newStudptr = createStudent("Remi", ageR);
    end = append(end, newStudptr);
    newStudptr = createStudent("Mike", ageM);
    end = append(end, newStudptr);

    printStudents(start);
    freeStudents(start);

    return 0;
}

/* Place your function definitions here. Be sure to include the definitions for 
   createStudent(), append(), printStudents() as well as any other functions you 
   created for the previous tasks. */

struct student *createStudent(char studentName[], int studentAge)
{
    struct student *ptr;
    ptr = (struct student *)malloc(sizeof(struct student));
    copyStr(studentName, ptr->name);
    ptr->age = studentAge;
    ptr->next = NULL;
    return ptr;
}

void copyStr(char *source, char *target)
{
    int i = 0;
    while (source[i] != '\0')
    {
        target[i] = source[i];
        i++;
    }
    target[i] = '\0';
}

struct student *append(struct student *end, struct student *newStudptr)
{
    end->next = newStudptr;
    return (newStudptr);
}

void printStudents(struct student *start)
{
    struct student *tmp = start;
    while (tmp != NULL)
    {
        printf("%s is %d years old.\n", tmp->name, tmp->age);
        tmp = tmp->next;
    }
}

void freeStudents(struct student *start)
{
    struct student *ptr = start;
    struct student *tmp;
    while (ptr != NULL)
    {
        tmp = ptr->next;
        free(ptr);
        ptr = tmp;
    }
}