#include <stdio.h>

int main(){
   int skaitlis, i, factorial;
   printf("ievadīt vienu veselu skaitli\n");
   scanf("%d", &skaitlis);
   int a[30];
   int j=1;
   for(i = 1, factorial = 1; i <= skaitlis ; i++){
      a[j] =( a[j]) * i;
      printf("%3d! = %15d\n",i,a[j]);
      j++;
   }

   return 0;
}
