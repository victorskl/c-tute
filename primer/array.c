#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void init2D()
{
  int *matrix[SIZE];
  for ( int i=0; i<SIZE; i++ )
  {
    matrix[i] = (int*)malloc( SIZE*sizeof(int) );
  }
}

int main()
{
  init2D();
  return 0;
}
