// Author: Kyle Chen kvc5823@psu.edu
// Collaborator: Aaron Hester amh7806@psu.edu
// Collaborator: Jiarou Deng dpj5243@psu.edu
// Collaborator: Livia Moore lmm6882psu.edu
// Section: 10
// Breakout: 11

#include "stdio.h"
#include "stdlib.h"
#include <readline/readline.h>

int sum_n(int n)
{
  if(n<=1)
  {
    return n;
  }
  else
  {
    return n + sum_n(n-1);
  }
}

void print_n(const char *s, int n)
{
  if (n>0)
  {
    printf("%s\n", s);
    print_n(s, n-1);
  }
}

int main(void) 
{
  int n = atof(readline("Enter an int: "));
  printf("sum is %d.\n", sum_n(n));
  const char *s = readline("Enter a string: ");
  print_n(s,n);
  return 0;
}