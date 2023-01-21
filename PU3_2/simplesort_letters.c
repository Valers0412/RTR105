/*
Uzrakstiet kodu dialogam ar lietotāju. Lietotājam ir jāievada trīs burti (izmantojiet char datu tipu). Lietotājam ir jāizvēlas burtu kārtošanas secība - alfabēta vai prētēji. Izmantojot nosacījuma operatoru, sakārtojiet burtus atbilstoši lietotāja izvēlei un attēlojiet sakārtotu burtu secību uz ekrāna. Risinājuma kodu augšupielādējiet GitHub vietnē Jūsu RTR105 repozitorijā, šeit iekopējiet risinājuma koda adresi. Maksimālais vērtējums - 10.
*/
#include <stdio.h>

int main (void){
  int sort;
  char a, b, c;
  printf("Lūduzu ievadi trīs burtus:\n");
  scanf("%c %c %c", &a, &b, &c);
  printf("Pirmais burts: %c\n", a);
  printf("Otrais burts: %c\n", b);
  printf("Trešais burts: %c\n", c);

  printf("Ivēlieties kārtošanas secību:\n");
  printf("spiediet\t1, lai kārtotu pret alfabēta secībā,\nspiediet\t0, lai kārtotu alfabēta secībā\n\n");
  
  scanf("%d", &sort);
  printf("\n");
//dilstošā secība (vienkārši brutāli salīdzina ASCII vērtības)
  if(sort==1){
    if((a>=b)&(a>=c)){
      printf("%c\n",a);
      if(b>=c){
        printf("%c\n%c\n",b,c);
      } 
      else{
        printf("%c\n%c\n",c,b);
      }
    } 
    else if ((b>=a)&(b>=c)){
      printf("%c\n",b);
      if(a>=c){
        printf("%c\n%c\n",a,c);
      } else{
        printf("%c\n%c\n",c,a);
      }
    }
    else if ((c>=a)&(c>=b)){
      printf("%c\n",c);
      if(a>=b){
        printf("%c\n%c\n",a,b);
      } else{
          printf("%c\n%c\n",b,a);
        }
    }
  }
  //augošā secība (vienkārši brutāli salīdzina ASCII vērtības)
  if(sort==0){
    if((a<=b)&(a<=c)){
      printf("%c\n",a);
      if(b<=c){
        printf("%c\n%c\n",b,c);
      } 
      else{
        printf("%c\n%c\n",c,b);
      }
    } 
    else if ((b<=a)&(b<=c)){
      printf("%c\n",b);
      if(a<=c){
        printf("%c\n%c\n",a,c);
      } else{
        printf("%c\n%c\n",c,a);
      }
    }
    else if ((c<=a)&(c<=b)){
      printf("%c\n",c);
      if(a<=b){
        printf("%c\n%c\n",a,b);
      } else{
          printf("%c\n%c\n",b,a);
        }
    }
  }
  return 0;
}
