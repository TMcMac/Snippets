#include <stdio.h>

int main(void)
{
  int x;
  int *ptrx = &x;
  float y;
  float *ptry = &y;
  char z;
  char *ptrz = &z;

  printf("The address of x is: %p\n", (void *)&x);
  printf("PRTX points to loaction: %p\n", (void *)ptrx);
  printf("The address of y is: %p\n", (void *)&y);
  printf("PRTY points to loaction: %p\n", (void *)ptry);
  printf("The address of z is: %p\n", (void *)&z);
  printf("PRTZ points to loaction: %p\n", (void *)ptrz);

  *ptrx = 11;
  *ptry = 3.14;
  *ptrz = 'F';

  printf("The value of x is: %d\n", x);
  printf("The value of y is: %f\n", y);
  printf("The value of z is: %c\n", z);

  return (0);
}
