#include <stdio.h>

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