// (/, *, %) test
#include <stdio.h>

int main(){
  int s1 , s2, rez = 0;
  s1 = 4;
  s2 = 10;
// dalīšana
  rez = s1/s2;
  printf ("\ndalīšana ar int\n");
  printf("%d (%ld bytes) / %d (%ld bytes) = %d (%ld bytes)\n",s1, sizeof(s1), s2, sizeof(s2), rez, sizeof(rez));
// reizināšan
  rez = s1*s2;
  printf ("\nreizināšana ar int\n");
  printf("%d (%ld bytes) * %d (%ld bytes) = %d (%ld bytes)\n",s1, sizeof(s1), s2, sizeof(s2), rez, sizeof(rez));
// modulo
  rez = s1%s2;
  printf ("\nmodulo ar int\n");
  printf("%d (%ld bytes) %% %d (%ld bytes) = %d (%ld bytes)\n",s1, sizeof(s1), s2, sizeof(s2), rez, sizeof(rez));
  
  s1 = 10;
  s2 = 4;
// dalīšana
  rez = s1/s2;
  printf ("\ndalīšana ar int\n");
  printf("%d (%ld bytes) / %d (%ld bytes) = %d (%ld bytes)\n",s1, sizeof(s1), s2, sizeof(s2), rez, sizeof(rez));
// reizināšan
  rez = s1*s2;
  printf ("\nreizināšana ar int\n");
  printf("%d (%ld bytes) * %d (%ld bytes) = %d (%ld bytes)\n",s1, sizeof(s1), s2, sizeof(s2), rez, sizeof(rez));
// modulo
  rez = s1%s2;
  printf ("\nmodulo ar int\n");
  printf("%d (%ld bytes) %% %d (%ld bytes) = %d (%ld bytes) izdala visu, ko var un izvada daudzumu, kas palika pēc veselo skaitļu dalīšanas\n",s1, sizeof(s1), s2, sizeof(s2), rez, sizeof(rez));
  printf ("darbības ar char un int \n");
  char c1 = 10;
  rez = c1/s1;
  printf("%d (%ld bytes) / %d (%ld bytes) = %d (%ld bytes)\n",c1, sizeof(c1), s1, sizeof(s1), rez, sizeof(rez));
  rez = c1*s1;
  printf("%d (%ld bytes) * %d (%ld bytes) = %d (%ld bytes)\n",c1, sizeof(c1), s1, sizeof(s1), rez, sizeof(rez));
  rez = c1%s1;
  printf("%d (%ld bytes) %% %d (%ld bytes) = %d (%ld bytes)\n",c1, sizeof(c1), s1, sizeof(s1), rez, sizeof(rez));
  printf ("%% (mod) nevar pielietot float un double datu tipiem \n");
  return 0;
}
