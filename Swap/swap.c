#include <stdio.h>

void swap(int *pa, int *pb) {
  int t;

  t = *pa;
  *pa = *pb;
  *pb = t;
}

int main(void) {
  int a;
  int b;

  a = 21;
  b = 17;
  printf("BEFORE SWAP: a = %d, b = %d\n", a, b);

  swap(&a, &b);
  printf("AFTER SWAP: a = %d, b = %d\n", a, b);
  return (0);
}
