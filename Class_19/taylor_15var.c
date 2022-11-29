#include<stdio.h>
#include<math.h>
double mans_cosh(double x);
void main(){
    double x, y, yy;
    printf("Lūdzu ievadiet vērtību \"x\" (x atrodas tuvu 0), kurai aprēķināt funkcijas \"cosh\" vērtību\n");
    scanf("%lf", &x);
    
    printf("         500                 \n");
    printf("        _____                \n");
    printf("        \\                   \n");
    printf("         \\     x^2k              \n");
    printf("cosh(x) = >   -------- = %lf                 \n", yy);
    printf("         /    (2k)!               \n");
    printf("        /_____               \n");
    printf("          k=1                \n\n");
    printf("Rekursīvais reizinātājs:\n");
    printf("\tx^2\n");
    printf("R =  ------------\n");
    printf("      (2k)(2k-1)    \n");

    y = cosh(x);
    printf("\nStandarta funkcija \t y = cosh(%.2f) = %lf\n\n", x, y);

    yy = mans_cosh(x);
    printf("Mana funkcija \t\t y = cosh(%.2f) = %lf\n", x, yy);
}
/*
funkcijas D.a.:
x ∈ (-inf;+inf);
y ∈ [-1;+inf);
*/
double mans_cosh(double x){
    double a, S;
    int k = 1;

    a = pow(x,2)/2;//+1, jo, kad k=0, a = 1, bet datoram nepatīk dalīt ar 0)
    S = a+1;

    while(k<500){
    k++;
    a = a*(pow(x,2)/(2*k*(2*k-1)));
    S = S + a;
    //printf(" cosh(%.2f) = %.5f\n", x, S);
        if(k==499){
            printf("Parciālsummas loceklis a(%d) = %.3e\n", k, a);
        }
    }
printf("Parciālsummas loceklis a(%d) = %e\n\n", k, a);

return S;
}