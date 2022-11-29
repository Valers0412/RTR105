#include<stdio.h>
#include<math.h>
double mans_cosh(double x);
void main(){
 double x=1.00, y, yy;
 y = cosh(x);
 printf("\nStandarta funkcija \t y = cosh(%.2f) = %lf\n", x, y);

 yy = mans_cosh(x);
 printf("Mana funkcija \t\t y = cosh(%.2f) = %lf\n", x, yy);
}

double mans_cosh(double x){
 double a, S;
 int k = 1;

 a = pow(x,2)/2;//+1, jo, kad k=0, a = 1, bet datoram nepatīk dalīt ar 0)
 S = a+1;

 while(k<5){
 k++;
 a = a*(pow(x,2)/(2*k*(2*k-1)));
 S = S + a;
 //printf(" cosh(%.2f) = %.5f\n", x, S);
 }
return S;
}
