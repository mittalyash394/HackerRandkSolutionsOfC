#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int sum(int *, int *);
int difference(int *, int *);
int main() {
  int a, b, c, d;
  scanf("%d\n%d", &a, &b);
  c = sum(&a, &b);
  printf("%d\n", c);
  d = difference(&a, &b);
  printf("%d\n", d);
  return 0;
}
int sum(int *a, int *b) {
  int p;
  p = *a + *b;
  return (p);
}
int difference(int *a, int *b) {
  int q, z = -1;
  q = *a - *b;
  if (q > 0)
    return (q);
  else
    return (q * z);
}

