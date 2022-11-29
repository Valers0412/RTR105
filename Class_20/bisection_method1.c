#include<stdio.h>
#include<math.h>

int main(){
 float a=-1, b=1.5*M_PI /*3pi/2*/, x, delta_x=1.e-3, f_a, f_b, f_x;
 int k = 0;

 f_a = cosh(a)-1;
 f_b = cosh(b)-1;

 if(f_a*f_b>0){
  printf("\n Intervālā [%.3f;%.3f] cosh(x) sakņu nav vai tajā ir pāra skaits sakņu\n", a, b);
  return 1;
 }

 printf("(no a) cosh(%7.3f)=(%7.3f)",a, cosh(a));
 printf("(no b) cosh(%7.3f)=(%7.3f)",b, cosh(b));

 while((b-a)>delta_x){
  k++;
  x=(a+b)/2;
  if(f_a*cosh(x)>0){
   a = x;
  }
  else {
   b = x;
  }

  printf("%2d. iterācija: cosh(%7.3f)=%7.3f\n", k, a, cosh(a));
  printf("cosh(%7.3f)=%7.3f\n",x, cosh(x));
  printf("cosh(%7.3f)=%7.3f\n",b, cosh(b));
 }

 printf("Sakne atrodas pie x=%.3f, jo cosh(x) ir %.3f\n", x ,cosh(x));

 return 0;
}
