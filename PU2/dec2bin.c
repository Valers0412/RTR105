/*
Uzrakstiet kodu dialogam ar lietotāju. Lietotājam ir jāievada viens naturāls skaitlis (izmantojiet char datu tipu). Izmantojot bitu operācijas - << un >>, sagatavojiet un attēlojiet ievadītam skaitlim atbilstošo bināro kodu. Risinājuma kodu augšupielādējiet GitHub vietnē Jūsu RTR105 repozitorijā, šeit iekopējiet risinājuma koda adresi.
*/

#include <stdio.h>

int main() {
  unsigned char num;
  printf("Lūdzu ievadiet decimālu skaitli, lai to pārveidotu uz bin: ");
  scanf("%d", &num);
  for (int i = 7; i >= 0; i--) {
    int mask = (1 << i);
    if (num & mask) printf("1");
    else printf("0");
  }
  return 0;
}
