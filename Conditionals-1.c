#include <stdio.h>

// This is a code that prints numbers from 1 to 30 but skips 5 and 19


int main(void) 
{
  int a;
  for (a = 1; a <= 30; a++)
    {
      if (a == 5 || a == 19)
        {
          continue;
        }
      printf("%i \n", a);
    }
  printf("\n");
  return 0;
}