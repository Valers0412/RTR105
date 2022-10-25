/* while
for
do while
//veidi kā pieralstīt ciklus
while (izteiksme);
while (izteiksme)
   ;
while (izteiksme) {;}
//if (izteiksme) == true;
tikmēr turpinās cikls (true bija bitu secība ar vismaz vienu vieninieku)
			(false bija absolutā nulle)




 */
#include <stdio.h>
int main(){
   int a=10;
   while(a>=0){
     printf("a: %d\n", a);
     a--;
   }
   printf("a: %d\n", a);

   return 0;
}

