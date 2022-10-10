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

#Programmēšanas uzdevumi#
#include <stdio.h>  
  
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
