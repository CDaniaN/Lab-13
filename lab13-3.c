#include <stdio.h>

#define SWAP(t, x, y) {t tmp = x; x = y; y = tmp;} //swwaps two values using a temp

int main()
{
  int x = 10, y = 2; //hardcode values
  SWAP(int, x, y); //calls  swap
  printf("x = %d, y = %d\n", x, y); //prints swapped numbers

  return 0;
}
