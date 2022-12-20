#include "return_functions.h"
#include "arg.h"
#include "no_arg.h"
#include <stdio.h>
int num;
int main(void){
   fprintf(stdout, "Lūdzu ievadiet skaitli testam!\n");
   scanf("%d", &num);
   arg(num);
   no_arg();
   without_arg();
   with_arg(num);
   return 0;
}
