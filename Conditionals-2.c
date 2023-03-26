#include <stdio.h>

// This code print number 1 to 10 in a matrix form 10 x 10

int main(void)
{
  int a, b;

  for (a = 1; a < 14; a++)
    {
      for (b = 1; b < 10; b++)
        {
          printf("%i", b);
        }
      printf("%i\n", a);
    }
  return 0;
}