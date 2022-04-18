#include <stdio.h>

#define LINE(m, x, b) (((m) * (x)) + b) // y=mx+b

int main()
{
  int m = 2, x = 4, b = 6, y = 0; //hardcode values
  y = LINE(m, x, b); //call line and store it in y
  printf("y = %d\n", y); //print y

  return 0;
}
