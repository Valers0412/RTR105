#include <stdio.h>
//printf vietā fprintf
//scanf vietā fscanf
int main(void){
   FILE *fp;//jauns datu tips, kas ir norāde, Norādīt faila atrašanos
   fp = fopen("./teksts.dat", "wt");//"wt" - w - fails atvērts rakstīšanai - t - teksts
		//kur (var norādīt ceļu) un ko (faila nosaukums)
		//kādam nolūkam
//skatās vai ir sanācis atvērt rakstīšanai (tikai tad ja ir tiesības)
   if( fp == NULL)
   {
      printf("failu nav izdevies atvērt\n");
      return 100;//stāvoklis nav kārtībā
   }
   //fprintf(stdout,"aaa"); = printf("AAA");
   fprintf(fp, "Izvads failā\n");
   fprintf(fp, "Fails atvērts\n");
   double d = 1.8963644;
   fprintf(fp,"mainīgā d vērtība: %.3f\n",d);
   fclose(fp);//ja fopen() ir bijis veiksmīgs, tad pēc beigšanas strādāt aizver to ar fclose()

   return 0;
}
