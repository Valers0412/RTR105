#include <stdio.h>
#include <string.h>
#define N 254
//idejas algoritmēšanai

/*

1)
int* pc, c, d;
c = 5;
d = -15;

pc = &c; printf("%d", *pc); // Output: 5
pc = &d; printf("%d", *pc); // Ouptut: -15

2) vārda garuma aprēķināšanai strlen()
*/

//mainīgie
char burts;
char burti[26] = {0};
char adrese;
char t[N];
char alfabets = 97;
//funkcijas
void teikums_print(char t[]);

int main(){

   printf("Lūdzu ievadiet teikumu!: \n");
   fgets(t, sizeof(t)/sizeof(char), stdin);
   teikums_print(t);
   for(int i = 0; i<strlen(t); i++)
   {
       if((t[i]>='A')&&(t[i]<='Z'))
       {
	  adrese = t[i] - 65;
	  burti[adrese] = burti[adrese]+1;
       }

       if((t[i]>='a')&&(t[i]<='z'))
       {
	  adrese = t[i] - 97;
	  burti[adrese] = burti[adrese]+1;
       }
   }
   for(int j = 0; j<26; j++)
   {
      printf("%2c",alfabets);
      alfabets = alfabets+1;
   }
   printf("\n");
   for(int j = 0; j<26; j++)
   {
      printf("%2d",burti[j]);
   }
   printf("\n");
//emm vārda garuma izvilkšana
   /*for(char g = 0; g
   printf("Šajā teikumā ir %d skaits vārdu, kuri garāki par 5 burtiem",garums);
   */
return 0;
}

void teikums_print(char t[])
{
   printf("teikums: ");
   puts(t);
}
