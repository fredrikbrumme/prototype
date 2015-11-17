#include <stdio.h>

int main()
{
  int vector[10];

  int i;
  for (i = 0; i < 11; i++)
    {
      int i;
      for (i = 0; i < 2; i++)
        {
          vector[i] = i;
	  printf("%d", vector[i]); 
	}
    }

  return 0;
}

