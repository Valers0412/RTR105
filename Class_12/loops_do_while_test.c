/* while
for
do while
//veidi kā pieralstīt ciklus
do ;
while (izteiksme);
do {;;;}
while (izteiksme);\
do {
   ;
   ;
   ;
}
while (izteiksme);
//if (izteiksme) == true;
tikmēr turpinās cikls (true bija bitu secība ar vismaz vienu vieninieku)
			(false bija absolutā nulle)

pirms while esošās darbibas tiks izpildītas, kamēr while izteiksme būs " true"
bet obligāti tiks izpildītas vismaz vienu reizi, ja pat nosacījums neatbilst;

 */
#include <stdio.h>
int main(){
   int a=10;
  do {
    printf("a: %d\n", a);
    a--;

  }
  while(a>=0);
   printf("a: %d\n", a);

   return 0;
}

