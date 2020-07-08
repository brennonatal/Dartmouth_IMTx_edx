#include <stdio.h>

int main()
{
  char familyName[50];
  char firstName[50];
  int age;
  printf("What is your family name?");
  fflush(stdout);		// forces the buffer to print on the screen
  scanf("%s", familyName);		//if there is no '\n' on the printf statement
  printf("What is your first name?");
  fflush(stdout);
  scanf("%s", firstName);
  printf("what is your age?");
  fflush(stdout);
  scanf("%d", &age);
  printf("%s %s %d\n", familyName, firstName, age);
  return 0;
}
