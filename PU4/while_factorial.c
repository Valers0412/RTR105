/*
Uzrakstiet kodu dialogam ar lietotāju. Lietotājam ir jāievada viens decimāls skaitlis, lietotājam ir jāizvēlas datu tips - char, int vai long long. Aprēķiniet un paziņojiet lietotājam viņa ievadīta skaitļa faktoriāla vērtība vai paziņojiet, ka ievadītam skaitlim ar izvēlētu datu tipu pareizi aprēķināt faktoriālu nav iespējams. Aprēķinam izmantojiet while ciklu. Aprēķins ir jāpārtrauc uzreiz, tik ko tas kļūst nepareizs (lai nav jātērē laiks). Nedrīkst izmantot datu tipu robežu konstantes, nedrīkst salīdzināt faktoriāla vērtību ar nulli, nedrīkst pārbaudīt faktoriāla vērtības zīmi, nedrīkst izmantot datu tipu savādāku nekā lietotājs ir izvēlējies. Risinājuma kodu augšupielādējiet GitHub vietnē Jūsu RTR105 repozitorijā, šeit iekopējiet risinājuma koda adresi.
*/
#include <stdio.h>
#include <math.h>

int main(void) {
  int dec = 0;
  char datatype[256] = {0};
  char skaitlis[256] = {0};
  char ch = 0;
  long long fll = 1;
  int fi = 1;
  char fc = 1;
  int k = 0;
  int itteration = 1;
  //datu tipa iegūšana
  printf("Ievadiet datu tipu, kādā saglabāt faktoriāla vērtību\nc - character, i - integer, l - long long\n");
  if(fgets(datatype, sizeof datatype, stdin) == NULL){
    printf("Ievadīta kļūda. \n");
    return 1;
  }
  ch = datatype[0];
if(ch == 'c') printf("Izvēlētais datu tips: char\n\n");
if(ch == 'i') printf("Izvēlētais datu tips: int\n\n");
if(ch == 'l') printf("Izvēlētais datu tips: long long\n\n");
//skaitļa iegūšana
  printf("Ievadiet decimālu skaitli tā faktoriāla aprēķināšanai\n");
  scanf("%d", &dec);
  printf("Ievadītais skaitlis: %d\n", dec);
//faktoriāla aprēķināšana
  printf("faktoriāls no %d ir: %d! = ", dec, dec);
//faktoriāla aprēķins character
  if(ch == 'c'){
    while(dec > 0){
      fc = fc*dec;
      dec--;
      itteration++;
      if(itteration>=5){
        if((fc%10)!=0){
          printf("\nŠādam datu tipam nav iespējams precīzi aprēķināt šī decimālā skaitļa faktoriāli\n");
          return 2;
        }
      }
    }
    printf("%d\n", fc);
 }
//faktoriāla aprēķins priekš intiger
  if(ch == 'i'){
    while(dec > 0){
      fi = fi*dec;
      dec--;
      itteration++;
      if(itteration>=5){
        if((fi%10)!=0){
          printf("\nŠādam datu tipam nav iespējams precīzi aprēķināt šī decimālā skaitļa faktoriāli\n");
          return 2;
        }
      }
    }
    printf("%d\n", fi);
  }
  //faktoriāla aprēķins priekš long long
  if(ch == 'l'){
    while(dec > 0){
      fll = fll*dec;
      dec--;
      itteration++;
     // printf("\nfll = %ld\n",fll);
      if(itteration>=5){
        if((fll%10)!=0){
          //printf("\n\nfll = %ld",fll);
          printf("\nŠādam datu tipam nav iespējams precīzi aprēķināt šī decimālā skaitļa faktoriāli\n");
          return 2;
        }
      }
    }
    printf("%lld\n", fll);
  }
  return 0;
}
