
#include <stdio.h>

#define VECTORSIZE 10

class BaseClass  {
  public:
    BaseClass();
    int vector[VECTORSIZE];
};

BaseClass::BaseClass()
{
  printf("Contructor\n");
}

int main()
{
  int i; 
  BaseClass b1;
  
  for (i=0;i<VECTORSIZE;i++) 
    printf("vector[%d] = %d\n", i, b1.vector[i]);
  
  return 0;
}


