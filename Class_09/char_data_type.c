#include <stdio.h>

int main(){
   char a = 10;	// divas darbības - mainigo deklarēšana + vertības piešķiršana
		// datu nosaukums var būt ar mnemonisko nosaukumu, piem., cilindra_tilpums
		// kur? (vieta adresei) cik? ( atbilstoši datu tipam)
		// int - vesela tipa konstante
		// double - reāla tipa konstante
   printf("character: %c\n", a);
   printf("number: %d\n", a);
   printf("hexnumber: %#x\n", a);
   printf("octnumber: %#o\n", a);
   char b;
   printf("\ncharacter: %c\n", b);
   printf("number: %d\n", b);
   printf("octnumber: %#o\n", b);

   b = 250;	//250 vietā redz -6
		//250 (dec) --> (bin) 1111 1010
		//char datu tips ir signed_char => vecākais bits ir zīme (MSB)(1)111 1010
		//biti jā invertē 						^000 0101 un jāpieskaita 1
		//								+000 0001
		//								=000 0110 = -6
   printf("\ncharacter: %c\n", b);
   printf("number: %d\n", b);
   printf("octnumber: %#o\n", b);
   unsigned char c = 320;
   printf("character: %c\n",c);
   printf("number: %d\n", c);
return 0;
}

