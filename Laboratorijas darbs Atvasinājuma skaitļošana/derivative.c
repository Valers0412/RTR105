/*
Uzrakstīt programmu tā, lai tā uz ekrāna izvada:
▶ dialogu ar lietotāju a vērtības iegūšanai
▶ dialogu ar lietotāju b vērtības iegūšanai
▶ dialogu ar lietotāju precizitātes vērtības iegūšanai
▶ f(x) vērtības, x no a līdz b (aprēķināt, attēlot un saglabāt derivative .dat failā)
▶ f’(x) vērtības, x no a līdz b (aprēķināt, attēlot un saglabāt derivative .dat failā;
izmantot atvasinājuma analītisko formulu)
▶ f’(x) vērtības, x no a līdz b (aprēķināt, attēlot un saglabāt derivative .dat failā;
izmantot skaitlisko atvasinājumu - diferencēšana un priekšu)
▶ f”(x) vērtības, x no a līdz b (aprēķināt, attēlot un saglabāt derivative .dat failā;
izmantot atvasinājuma analītisko formulu)
▶ f”(x) vērtības, x no a līdz b (aprēķināt, attēlot un saglabāt derivative .dat failā;
izmantot skaitlisko atvasinājumu - diferencēšana un priekšu)
*/
#include <stdio.h>
#include <math.h>

int main(void) {
  FILE * pFile;
  pFile  = fopen("derivative.dat", "wt");
  if (pFile == NULL){
    fputs("file error", stderr);
    return 1;//exit 1
  }
//vērtību iegūšana
  fprintf(stdout, "funkcijas cosh(x) atvasinājuma skaitliskā iegūšana noteiktajās robežās un ar noteikto precizitāti\n");
  float a, b, acc;
  fprintf(stdout, "lūdzu ievadiet pirmo robežu 'a'\n");
  scanf("%f", &a);
  fprintf(stdout, "lūdzu ievadiet otro robežu 'b'\n");
  scanf("%f", &b);
  fprintf(stdout, "lūdzu ievadiet precizitāti 'acc'\n");
  scanf("%f", &acc);
  fprintf(stdout, "cosh(x) atvasinājuma vērtība tiek meklēta x = [%.3f;%.3f] ar precizitāti: %.3f\n", a, b, acc);
//funkcijas vērtības apgabalā
  float f;
  while(a<b){
    f = cosh(a);
    fprintf(pFile,"%.3f %.3f %.3f\n", a, f, (cosh(a+acc)-(cosh(a)))/acc);
    a = a + acc;
    }
  fclose(pFile);
  return 0;
}
