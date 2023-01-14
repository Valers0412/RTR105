/*
▶ dialogu ar lietotāju a vērtības iegūšanai
▶ dialogu ar lietotāju b vērtības iegūšanai
▶ dialogu ar lietotāju precizitātes vērtības iegūšanai
▶ laukuma (starp f(x) un x ass) vērtību (aprēķins izmantojot taisnstūru metodi)
▶ laukuma (starp f(x) un x ass) vērtību (aprēķins izmantojot trapeču metodi)
▶ laukuma (starp f(x) un x ass) vērtību (aprēķins izmantojot Simpsona metodi)
*/
#include <stdio.h>
#include <math.h>

int main(void) {
//vērtību iegūšana
  fprintf(stdout, "funkcijas cosh(x) integrēšanas skaitliskā iegūšana noteiktajās robežās un ar noteikto precizitāti\n");
  float a, b, acc;
  fprintf(stdout, "lūdzu ievadiet pirmo robežu 'a'\n");
  scanf("%f", &a);
  fprintf(stdout, "lūdzu ievadiet otro robežu 'b'\n");
  scanf("%f", &b);
  fprintf(stdout, "lūdzu ievadiet precizitāti 'acc'\n");
  scanf("%f", &acc);
  fprintf(stdout, "cosh(x) integrēšanas vērtība tiek meklēta x = [%.3f;%.3f] ar precizitāti: %.3f\n", a, b, acc);
  float h, integr1, integr2;
  int k, n = 2;
  integr1 = 0;
  integr2 = ((b-a)*(cosh(a)+cosh(b))/n)+acc;//acc pieskaita, lai nebūtu 0
  //taisnstūru metode
  while(fabs(integr2-integr1 > acc)){//fabs math.h moduļa funkcija
    n *= 2;
    h = (b-a)/n;
    integr1 = integr2;
    integr2 = 0;
    for(k=0;k<n;k++){
      integr2 += h*cosh(a+(k+0.5)*h);
    }
  }
  fprintf(stdout, "Integrāļa vērtība izmantojot taisnstūru metodi: %.3f\n", integr2);
  //Trapeces metode
  n = 2;
  integr1 = 0;
  integr2 = (h/2)*(cosh(a)+2*cosh(a+1*h)+cosh(b));
  while(fabs(integr2-integr1>acc)){
    n *= 2;
    h = (b-a)/n;
    integr1 = integr2;
    integr2 = 0;
    for(k=0;k<n;k++){
      integr2 += (h/2)*2*cosh(a+k*h);
    }
  }
  fprintf(stdout, "Integrāļa vērtība izmantojot trapeces metodi: %.3f\n",integr2);
  //Simpsona metode
  int m = 1;
  n = 2;
  integr1 = 0;
  integr2 = (b-a)*(cosh(a)+cosh(b))/n;
  while(fabs(integr2 - integr1>acc)){
    m *= 2;
    n = 2*m;
    h = (b-a)/n;
    integr1 = integr2;
    integr2 = 0;
    for(k=1;k<=m-1;k++){
      integr2 = integr2 + 2*(2*cosh(a+(2*k-1)*h)+cosh(a+2*k*h));
      integr2 = integr2 + cosh(a) + cosh(b) + 4*cosh(b-h);
      integr2 *= h/3;
    }   
  }
  fprintf(stdout, "Integrāļa vērtība izmantojot Simpsona metodi: %.3f\n", integr2);
  return 0;
}
