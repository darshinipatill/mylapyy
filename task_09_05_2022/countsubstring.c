/*test.c*/

#include <stdio.h>
#include <string.h>
#define MAX_STRING_SIZE 1024

int substring_count(char* string, char* substring) {
  int i, j, l1, l2;
  int count = 0;
  int found = 0;

  int substring_count(char* string, char* substring) {
  int i, j, l1, l2;
  int count = 0;

  l1 = strlen(string);
  l2 = strlen(substring);

  for(i = 0; i < l1 - l2 + 1; i++) {
    if(strstr(string + i, substring) == string + i) {
      count++;
      i = i + l2 -1;
    }
  }

  return count;
}
int main()
{
  char string[MAX_STRING_SIZE];
  char substring[MAX_STRING_SIZE];
  int count = 0;
 count = substring_count(string, substring);

  printf("Substring occurrence count is: %d.\n", count);

  return 0;
}