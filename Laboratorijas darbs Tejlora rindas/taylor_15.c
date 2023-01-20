#include<stdio.h>
#include<math.h>
double mans_cosh(double x);//mana cosh funkcija
void main(){
    double x, y, yy;
    fprintf(stdout, "Lūdzu ievadiet vērtību \"x\" (x atrodas tuvu 0), kurai aprēķināt funkcijas \"cosh(x)\" vērtību\n");
    scanf("%lf", &x);//iegūst argumenta vērtību pie kādas meklēt y vērtību
    yy = mans_cosh(x);  
    fprintf(stdout, "         500                 \n");
    fprintf(stdout, "        _____                \n");
    fprintf(stdout, "        \\                   \n");
    fprintf(stdout, "         \\     x^2k              \n");
    fprintf(stdout, "cosh(x) = >   -------- = %lf                 \n", yy);
    fprintf(stdout, "         /    (2k)!               \n");
    fprintf(stdout, "        /_____               \n");
    fprintf(stdout, "          k=1                \n\n");
    fprintf(stdout, "Rekursīvais reizinātājs:\n");
    fprintf(stdout, "\t\tx^2\n");
    fprintf(stdout, "R =  ------------\n");
    fprintf(stdout, "      (2k)(2k-1)    \n");

    y = cosh(x);
    fprintf(stdout, "\nStandarta funkcija \t y = cosh(%.2f) = %lf\n\n", x, y);

    fprintf(stdout, "Mana funkcija \t\t y = cosh(%.2f) = %lf\n", x, yy);
}
/*
funkcijas D.a.:
x ∈ (-inf;+inf);
y ∈ [-1;+inf);
*/
double mans_cosh(double x){//funkcija ļoti strauji pieaug
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
            fprintf(stdout, "Parciālsummas loceklis a(%d) = %Le\n", k, a);
        }
    }
printf("Parciālsummas loceklis a(%d) = %Le\n\n", k, a);
return S;
}
