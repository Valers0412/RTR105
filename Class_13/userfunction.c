#include <stdio.h>
// atslēgas vārds void nozīmē , ka  return nebūs
char dialogs();
char dialogs_i(int i);
/*

*/
  int main() {
  char c_main_local;
  c_main_local = 0;

  c_main_local =  dialogs();
  printf("Ir ievadīts skaitlis %d \n",c_main_local);

  int i_main = 1;
  dialogs_i(i_main);
  i_main++;
  dialogs_i(i_main);

  return 0;
}
		// (var būt uzreiz definēšana be zdeklarēšanas
		// difnēšana var būt ievietota pēc main apraksta
		// bet deklarēšanai vai definēšanai ir jābut pirms funkcijas izmantošanai!!!
		// koda lasīšanas atvieglošanai, deklarēšanu raksta sākumā atsevišķi no definēšanas
		// un tad definēšana ir pēc main funkcijas

char  dialogs (){

  char c_dialogs_local;

  printf("lūdzu ievadīt vienu naturālu skaitli līdz 255\n");
  scanf(" %hhd", &c_dialogs_local);
  printf("Ir ievadīts skaitlis %d \n",c_dialogs_local);

  return c_dialogs_local ;// funkcijas definēšana
}

char dialogs_i(int i_main){
  char c_dialogs_i_local;

  printf("lūdzu ievadīt vienu naturālu skaitli līdz 255\n");
  scanf(" %hhd", &c_dialogs_i_local);
  printf("Ir ievadīts skaitlis %d \n",c_dialogs_i_local);

  return c_dialogs_i_local ;// funkcijas definēšana

}

