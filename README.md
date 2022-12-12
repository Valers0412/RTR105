# **Datormācība** #
### [Teksta rediģēšanas sintakse](https://docs.github.com/en/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax#styling-text) ### 
### [Tutorial](https://www.tutorialspoint.com/unix/unix-file-management.htm#) ###

### To do list ###
- [x] Sakārtot pierakstus
- [ ] Tutorialspoint linux pamācība 1-9
- [ ] Tutorialspoint linux pamācība 10-x 
- [ ] izveidot texta failus linux un paskatīties par scriptiem  
## Satura rādītājs ##
- [Basic knowledge](https://github.com/Valers0412/Valers0412/edit/main/README.md#piem%C4%93ri-ar-sarakstiem) 
- [New folder](https://github.com/Valers0412/Valers0412#darbības-ar-failiem)
- [Git clone](https://github.com/Valers0412/Valers0412#git--clone-links)
- [What are commands](https://github.com/Valers0412/Valers0412#kas-ir-komandas)
- [References](https://github.com/Valers0412/Valers0412/edit/main/README.md#my-refernces) 
- [3.sadaļa]()

## Basic knowledge ##
*Paņēmieni*
- Cntrl+alt+t == atver konsoli
- cntrl+shift+t == jauns tab
- whoami == user name kurš strādā 
- cntrl alt (fkey) == maina termināļa nodalījumu 
- exit == logout
- Tilde (~) norāda uz home directory
- pwd == powerdirectory (kur whoami atrodās)
- Lai beigtu skatīties listu ar komandām pēc tab nospiešanas izmanto *q*
- man (function) == manuāls par funkcijas izmantošanu
- echo == atbals/pieprasa 
- echo $0 == komunikācijas veids ar linux
- ls -l == list ar atslēgu detalizēti apskatīt dilstošā secībā pēc alfabēta
- ls -lt == list ar atslēgu detalizēti apskatīt dilstošā secībā pēc izveidošanas laika
- rwx == read write execute --> saimnieka tiesibas, saimnieka grupas tiesibas, pasaules tiesības drwxr-xr-x (d == disk)
- linux paslept lietas dara ar .pirms kaut kaa
- . apzīmē šo directory
- directory == file folder
### Jaunu folder izveida ###
- mkdir (folder name)
Tajā jau būs fails . Un ..
### Darbības ar failiem ###
- lai izveidotu failus izmanto --> cat > "filename.txt" 
- nano (file name) == izveidot un rediģēt failu caur teksta rediģētāju nano
- cat (file name) == izvadīt/izlasīt faila sastāvu
- rm (file name) == remove
- rm -rf (file name) == force remove 
### Git  clone links ###
- git clone (links uz repozitoriju)

## My refernces: ##
[^1] J. Ziemelis 
[^2] [Tutorial](https://www.tutorialspoint.com/unix/unix-file-management.htm#)
<!---
Valers0412/Valers0412 is a ✨ special ✨ repository because its `README.md` (this file) appears on your GitHub profile.
You can click the Preview link to take a look at your changes.
--->

## Day 2 ##
- startēt procesus ar &
- uname == operētājsistēmas nosaukums
- kill (procesa name) == izslēgs to
- git add .

## Kas ir komandas ##
Komanda ir izpildāmā faila nosaukums, kas tiek sameklēts izpildāmo mapju sarakstā 
Pārskatāmās failu mapes where is 
- echo $PATH == pārskatāmo adrešu saraksts, kas tiek pārbaudīts pēc komandām  

Majasdarbins ar repozitoriju izvilkšanu uz mājām 
- history > failanosaukums.txt
## Scriptu rakstīšana izmantojot nano ##
- nano faila nosaukums
Pirmais komentārs #!/bin/bash
- git config --global user.name username
- git config --global user.email email
- git commit -m "nosaukums"
- git push origin main
### Tiesību piešķiršana ###
- chmod 111 110 100 (rwxrw-r--) 764

## Programēšanas uzdevumi ##  

### 1. PU (40 000 000)  ###  
#include "stdio.h"  
  
int main()   
{  
    long long int a, b, c;  
    printf("ievadi 400000:\n");  
    scanf("%lli", &a);   
    printf("ievadi 100000:\n");  
    scanf("%lli", &b);   
    c = a * b;  
    printf("%lli\n", c);  
    return 0;  
}  
### 2. PU dec2bin ###  
#include "stdio.h"

int main(void) {
  printf("ievadi skaitli\n");  
  unsigned char c1; //piem 8 = 0000 1000  
  scanf("%c",&c1);  
  for (char i = 0; i<=7;i++){  
    c1 = (unsigned char)(c1 << i); //   
    c1 = (unsigned char)(c1 >> 7);  
    printf("%d", &c1);  
  }  
  return 0;  
}  
### 3. PU if + simple sort ###  
#include "stdio.h"

int main(void){  
  int a, b, c;  
  int sort = 2;  
  printf("Lūduzu ievadi trīs decimālus skaitļus:\n");  
  scanf("%d", &a);  
  scanf("%d", &b);  
  scanf("%d", &b);  
  
  printf("ievadītie skaitļi %d, %d un %d\n",a, b, c);  
  
  printf("Ivēlieties kārtošanas secību:\n");  
  printf("spiediet 1, lai kārtotu augošā secībā,\nspiediedt 0, lai kārtotu dilstošā secībā\n");  
    
  scanf("%d", &sort);  
  
  if(sort==1){  
    if((a>b)&(a>c)){  
      printf("%d\n",a);   
      if(b>=c){  
        printf("%d\n%d\n",b,c);  
      }   
      else{  
        printf("%d\n%d\n",c,b);  
      }  
    }   
    else if ((b>a)&(b>c)){  
      printf("%d\n",a);  
      if(a>=c){  
        printf("%d\n%d\n",a,c);  
      } else{  
        printf("%d\n%d\n",c,a);  
      }  
    }  
    else if ((c>a)&(c>b)){  
      printf("%d\n",a);  
      if(a>=b){  
        printf("%d\n%d\n",a,b);  
      } else{  
          printf("%d\n%d\n",b,a);  
        }  
    }  
  }  
  return 0;   
}  
### 4. PU while + factorial ###  
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
