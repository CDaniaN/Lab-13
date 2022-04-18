#include <stdio.h>

#define LOWEST(A, B) ((A) < (B) ? (A) : (B)) //compare a & b and see which one is lesser than

int main()
{
  int a = 5, b = 3, min; //hardcode values for a & b
  min = LOWEST(a,b); // make min = LOWEST to find the smaller one
	printf("Minimum number is: %d\n",min); //print it out

  return 0;
}
