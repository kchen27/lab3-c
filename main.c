// Author: Kyle Chen kvc5823@psu.edu
// Collaborator:
// Collaborator:
// Collaborator:
// Section:
// Breakout:

#include "stdio.h"
#include "stdlib.h"
#include <readline/readline.h>
#include <readline/history.h>

int sum_n(int n)
{
  if(n<=0)
  {
    return 0;
  }
  return n + sum_n(n-1);
}

void print_n(const char *s, int n)
{
  if(n<=0)
  {
    return;
  }
  else
  {
    print_n(s,n-1);
    printf("%s\n", s);
  }
}

int main(void) {
  int n = 0;
  char *str;
  str = readline("Enter an int: ");
  n = atoi(str);
  printf(sum is %d.n\, sum_n(n));
  free(str);

  str = readline("Enter a string: ");
  print_n(str, n);

  free(str);
  return 0;
}