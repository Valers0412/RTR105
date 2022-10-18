//loģiskās operācijas ar datu tipiesm
#include <stdio.h>
#include <stdbool.h>
int main(){
  int i1 = 4, i2 = 10;
  float f1 = 1.2, f2 = 2.1;
  double d1 = 20000;
  bool rez = (i1 != i2);
  printf ("rez = (4 != 10) = %s \n", rez ? " true" : "false" );
  return 0;
}
