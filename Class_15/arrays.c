#include<stdio.h>

//masīvi - secīgi novietotas vērtības atmina izgūstāmas ar viena 
//indetifikātora palīdzību:a[0], a[1], a[2]

//NB! masīva pirmais elements ir a[0]


int main(){
   int i_array[10];// int lieluma masīva deklarēšana\

   int i_array_2[3] = {1,2,3};

   int i_array_3[5] = {4,5,6};//masīva pēdējie divi elementi būs ar 0 vērtībām

   int i_array_2D[2][3] = {{7,8,9},
			{10,11,12}}; //[2-rindu skaits][3-kolonu skaits]

   printf("masīva i_array_2 adrese: %p\n",i_array_2);
   printf("masīva i_array_2 0. elementa adrese: %p\n",&i_array_2[0]);
   printf("masīva i_array_2 0. elementa vērtība: %d\n",i_array_2[0]);
   printf("masīva i_array_2 1. elementa adrese: %p\n", &i_array_2[1]);
   printf("masīva i_array_2 1. elementa vērtība: %d\n", i_array_2[1]);

   printf("masīva i_array_2D konkrētas koordinātes adrese:  %d\n", *(*(i_array_2D+1)+0));

   return 0;
}
