#include <stdio.h>
int main()
{
  int divident = 0;
  int divisor = 1;
  printf("Enter two numbers to be divided: ");
  scanf("%d%d", &divident, &divisor);
  printf("The division of %d by %d is %.3f\n", divident, divisor, (float)divident/divisor);
  return 0;
}
 
