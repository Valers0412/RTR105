/* while
for
do while
//veidi kā pieralstīt ciklus
for (;izteiksme;);
for (;izteiksme;)
   ;
for (;izteiksme;){
   ;
}
strādā tik ilgi kamēr iekavās izteiksme ir true
(true bija bitu secība ar vismaz vienu vieninieku)
(false bija absolutā nulle)




 */
#include <stdio.h>
int main(){
   int a;;
// 	for ((definīcija);(izteiksme);(dekraments) );
   for(a=10;a>=0;a--){
//	darbības aiz pirmā senikola tiek izpildītis vienu reizi cikla sākumā
// tālāk izteiksmes rezultāta aprēķins (jeb nosacījumu pārbaude)
// cikla ķermeņa (iekš {}) darbību pildīšana
// cikla mainīgo izmaiņa - aprakstīta aiz otrā " ; "
// pēc cikla beigām tiek izpildīts dekraments
     printf("a: %d\n", a);
   }
   printf("a: %d\n", a);

   return 0;
}

