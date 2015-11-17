
#include <stdio.h>

#define VECTORSIZE 10
typedef struct my_vector {
    int data[VECTORSIZE];
    int size;
} my_vector;

int main()
{
  int i;
  my_vector Vector;
  
  for (i=0;i<VECTORSIZE;i++) 
    printf("Vector[%d] = %d\n", i, Vector.data[i]);
  
  return 0;
}


