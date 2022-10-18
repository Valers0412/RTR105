#include <stdio.h>

int main (){
  unsigned char uc1 =1; // 0000 0001
  unsigned char c1 = 1;

  //bitu bīdīšana pa kreisi
printf ("%d (%ld bytes) << %d (%ld bytes)  \n", uc1, sizeof(uc1), c1, sizeof(c1));
printf (" = %d (%ld bytes) \n\n", uc1<<c1, sizeof(uc1<<c1)); //līdzīga reizināšanai ar 2
								// piemēram 0000 0110 << 3 = 2^3 *3
// kā piespiest, lai rezultata datu tips butu tāds, kādu vajag
printf (" = %d (%ld bytes) \n\n",(char)(uc1<<c1), sizeof((char)(uc1<<c1))); //pirms rezultata iekavasieraksta izredzeto datu tipu
  //bitu bīdīšana pa labi
uc1 = 120;
c1 =1;
 printf("%d (%ld bytes) >> %d (%ld bytes) \n", uc1,sizeof(uc1),c1, sizeof(c1));
 printf (" = %d (%ld bytes) \n\n", uc1>>c1,sizeof((char)(uc1>>c1))); //līdzīga dalīšanai ar 2

  return 0;
}
