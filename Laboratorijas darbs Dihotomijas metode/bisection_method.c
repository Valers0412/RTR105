#include<stdio.h>
#include<math.h>

float modified_cosh(float x, float A);

int main(){
  printf("cosh(x)-A sakņu meklētājs (precīzs mazām x vērtībām)\n");
  float a, x, delta_x, b, y, A, f_a, f_b;
  int iteration = 1;
  printf("Lūdzu ievadīt mazākās robežas 'a' vērtību: ");
  scanf("%f",&a);
  printf("Lūdzu ievadīt lielākās robežas 'b' vērtību: ");
  scanf("%f", &b);
  
  printf("Saknes tiek meklētas intervālā [%.3f;%.3f]\n\n", a, b);
  
  printf("Lūdzu ievadīt y vērtību, ar kuru tiks meklēti  krustpunkti y = ");
  scanf("%f", &A);
  printf("Lūdzu ievadīt precizitātes vērtību delta_x = ");
  scanf("%f", &delta_x);
  
  f_a = modified_cosh(a, A); f_b = modified_cosh(b, A);
  
  if(f_a*f_b>0){//pārbaude
    printf("Intervālā [%.3f;%.3f] cosh(x) nav sakņu vai ir pāra skaits sakņu\n",a ,b);
    return 1;
  }

  x = a;
  while(x<b){
    //printf("%10.2f%10.3f\n", x, modified_cosh(x, A));
    x = x + delta_x;
    
    if((modified_cosh(x, A)<delta_x)&&(modified_cosh(x, A)>-delta_x)){
      printf("Sakne atrodas tuvu pie vērtībām:\n\tx = %.4f\n", x);
      printf("\tcosh(%.4f) -%.0f = %.4f\n", x, A, modified_cosh(x, A));
      printf("Vajadzīgais iterāciju skaits pie precizitātes %.3f ir %d", delta_x, iteration);
      return 0;
    }
    iteration++;
  }
  printf("Lūduz samazināt precizitāti, lai spētu atrast tuvināto saknes vērtību\n");
  return 1;
}

float modified_cosh(float x, float A){
  return cosh(x)-A;
}
