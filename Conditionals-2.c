#include <stdio.h>

// This code print number 1 to 10 in a matrix form 10 x 10

int main(void)
{
  int a, b, i, j;
  a = 10;
  b = 14;

  for (i = 1; i <= a; i++) 
    {
      for (j = 1; j <= b; j++)
        {
          printf("%i", j);
        }
      printf("\n");
    }
  return 0;
}