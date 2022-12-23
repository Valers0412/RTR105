#include <stdio.h>

int main(void) {
  long long int a, b, c;
  printf("ievadi 400000:\n");
  scanf("%lli", &a);
  printf("ievadi 100000:\n");
  scanf("%lli", &b);
  c = a * b;
  printf("%lli\n", c);
  return 0;
}
