#include <stdio.h>

int main()
{
  char familyName[50];
  char firstName[50];
  int age;
  printf("What is your family name?\n");
  scanf("%s", familyName); //fgets getline readline
  printf("What is your first name?\n");
  scanf("%s", firstName);
  printf("what is your age?\n");
  scanf("%d", &age);
  printf("familyName: %s firstName: %s age: %d\n", familyName, firstName, age);
  return 0;
}
