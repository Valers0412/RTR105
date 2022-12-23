/*
Uzrakstiet kodu dialogam ar lietotāju. Lietotājam ir jāievada trīs decimāli skaitļi (izmantojiet int datu tipu). Lietotājam ir jāizvēlas skaitļu kārtošanas secība - augošā vai dilstošā. Izmantojot nosacījuma operatoru, sakārtojiet skaitļus atbilstoši lietotāja izvēlei un attēlojiet sakārtotu skaitļu secību uz ekrāna. Risinājuma kodu augšupielādējiet GitHub vietnē Jūsu RTR105 repozitorijā, šeit iekopējiet risinājuma koda adresi. Maksimālais vērtējums - 9.
*/
#include <stdio.h>

int main(void){
  int a, b, c, sort;
  printf("Lūduzu ievadi trīs decimālus skaitļus:\n");
  scanf("%d", &a);
  printf("Pirmais decimālis: %d\n", a);
  scanf("%d", &b);
  printf("Otrais decimālis: %d\n", b);
  scanf("%d", &c);
  printf("Trešais decimālis: %d\n", c);

  //printf("ievadītie skaitļi %d, %d un %d\n",a, b, c);

  printf("Ivēlieties kārtošanas secību:\n");
  printf("spiediet\t1, lai kārtotu dilstošā secībā,\nspiediet\t0, lai kārtotu augošā secībā\n\n");
  
  scanf("%d", &sort);
  printf("\n");
//dilstošā secība (vienkārši brutāli salīdzina skaitļus)
  if(sort==1){
    if((a>=b)&(a>=c)){
      printf("%d\n",a);
      if(b>=c){
        printf("%d\n%d\n",b,c);
      } 
      else{
        printf("%d\n%d\n",c,b);
      }
    } 
    else if ((b>=a)&(b>=c)){
      printf("%d\n",b);
      if(a>=c){
        printf("%d\n%d\n",a,c);
      } else{
        printf("%d\n%d\n",c,a);
      }
    }
    else if ((c>=a)&(c>=b)){
      printf("%d\n",c);
      if(a>=b){
        printf("%d\n%d\n",a,b);
      } else{
          printf("%d\n%d\n",b,a);
        }
    }
  }
  //augošā secība (vienkārši brutāli salīdzina skaitļus)
  if(sort==0){
    if((a<=b)&(a<=c)){
      printf("%d\n",a);
      if(b<=c){
        printf("%d\n%d\n",b,c);
      } 
      else{
        printf("%d\n%d\n",c,b);
      }
    } 
    else if ((b<=a)&(b<=c)){
      printf("%d\n",b);
      if(a<=c){
        printf("%d\n%d\n",a,c);
      } else{
        printf("%d\n%d\n",c,a);
      }
    }
    else if ((c<=a)&(c<=b)){
      printf("%d\n",c);
      if(a<=b){
        printf("%d\n%d\n",a,b);
      } else{
          printf("%d\n%d\n",b,a);
        }
    }
  }
  return 0;
}
