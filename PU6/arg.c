#include "arg.h"
#include <stdio.h>

void arg(int num){
   num+=2;
   fprintf(stdout, "+2 skaitlim ir: %d\n", num);
}
