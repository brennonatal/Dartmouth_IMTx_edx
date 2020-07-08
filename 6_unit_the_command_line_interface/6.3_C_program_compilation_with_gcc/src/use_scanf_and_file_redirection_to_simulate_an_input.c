//REDIRECTING OUTPUT OF A COMMAND TO THE INPUT OF THE PROGRAM
//cat answers | out/test
//./out/test < answers 

#include <stdio.h>

int main()
{
  char familyName[50];
  char firstName[50];
  int age;
  printf("What is your family name?");
  fflush(stdout);
  scanf("%s", familyName);
  printf("What is your first name?");
  fflush(stdout);
  scanf("%s", firstName);
  printf("what is your age?");
  fflush(stdout);
  scanf("%d", &age);
  printf("familyName: %s firstName: %s age: %d\n", familyName, firstName, age);
  return 0;
}
