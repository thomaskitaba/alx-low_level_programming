#include "main.h"
#include <stdio.h>
#include <string.h>

int main (void)
{
  int str[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  char *s;

  s = reverse_array(char *str);
  printf("reversed: %s", s);

  return (0);

}
