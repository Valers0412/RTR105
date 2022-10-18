#include <stdio.h>
int main(){
 if (1); // apaļās iekavas vienmēr skatās vai ir apaļa nulle (kad visas bit vērtības ir nulles) == false,
	// vai ir kaut viens bits ar 1 == true
 int a = 0;
 scanf("%d",&a);
 if (a<7) printf("%d < 7\n", a);
 else printf("%d >= 7\n", a);
 return 0;
}
