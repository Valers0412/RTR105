// operācijas:		operands_1+operācija+operands_2
//			(Datu tips)		(Datu tips)
//					||
//					\/
// 				operācijas rezultāts
// 			(operācijas rezultāta datu tips ir lielākais datu tips
// 				kas piedalās operācijā)
// matemātiskās operācijas: +, -, *, /, %
// loģiskās operācijas &&,|| (and, or)
// loģiskās operācijas pa bitiem: &, |, ^, ! (and, or, xor, not)
// bit shift operācijas : >>, <<
// kop ētīt šodien: kā strādā operācija
// 			vai operācija drīkst izmantot jebkādu datu tipu
// 			operāciju izpildīšanas secība? (to nosaka prioritāte; secības kontrolei var izmantot iekavas)
// / (int/int vai char/int, vai char/char), %, &, |, ^. !, &&, ||, <<, >>

#include <stdio.h>
int main(){
  char c = 'A';
  int i = 2000;
float f = 2.3;
double d = -5.6e4;

printf("%d (%ld bytes) * %d (%ld bytes)= %d (%ld bytes) \n",c, sizeof(c), i, sizeof(i), c*i,sizeof(i*c));
return 0;
}
