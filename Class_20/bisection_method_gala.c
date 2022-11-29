#include<stdio.h>
#include<math.h>

float modified_cosh(float x, float A);

int main(){
 float a, x, delta_x, b, y, A, f_a, f_b;
 a = -1;
 b = M_PI;

 printf("Saknes tiek meklētas intervālā [%.3f;%.3f]\n\n", a, b);

 printf("Lūdzu ievadīt y vērtību, ar kuru tiks meklēti  krustpunkti\n");
 scanf("%f", &A);

 f_a = modified_cosh(a, A); f_b = modified_cosh(b, A);
 if(f_a*f_b>0){
  printf("Intervālā [%.3f;%.3f] cosh(x) nav sakņu vai ir pāra skaits sakņu\n",a ,b);
  return 1;
 }
/*
 x = a;
 delta_x = 0.1;
 while(x<b){
  printf("%10.1f%10.3f\n", x, modified_cosh(x, A));
  x = x + delta_x;
 }
*/
}

float modified_cosh(float x, float A){
 return cosh(x)-A;
}
