#include "return_functions.h"
#include <stdio.h>

int without_arg(){
   fprintf(stdout, "Funkcija bez argumentiem un ar retunrn\n");
   return 0;
}

int with_arg(int num){
   num++;
   fprintf(stdout, "+1 skaitlim ir: %d\n", num);
   return 0;
}
