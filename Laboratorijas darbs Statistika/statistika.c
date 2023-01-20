/*
▶ dialogu ar lietotāju simbolu (teksta) rindas iegūšanai
▶ minimālo vērtību (saskaņā ar ASCII skaitļiem)
▶ maksimālo vērtību (saskaņā ar ASCII skaitļiem)
▶ vidējo vērtību (saskaņā ar ASCII skaitļiem)
▶ mediānas vērtību (saskaņā ar ASCII skaitļiem)
▶ modas(u) vērtību(as) (saskaņā ar ASCII skaitļiem)
▶ sakārtoto simbolu rindu vienā rindā un atbilstošus ASCII skaitļus nākamajā rindā
rindas kārtošana alfabēta secībā - A, B, C, ..., a, b, c, ... (saskaņā ar ASCII skaitļiem)

*/
#include <stdio.h>
#include <string.h>

void sort(char a[], int size);
void videjais(char a[], int size);
void median(char a[], int size);
void moda(char a[], int size);

int main() {
  int size;
  fprintf(stdout, "Ievadīt, cik reizes tiks nolasīti dati ");
  scanf("%d", &size);
  char t[size];
  
  fprintf(stdout, "Ievadiet datus atsevišķi tik reizes, cik norādījāt ");
  for (int i = 0; i < size; i++) {
    scanf("%s", &t[i]);
    //if (t[i] == 33) break;
  }
  sort(t, size);
  videjais(t, size);
  median(t, size);
  moda(t, size);

  // Print the sorted symbols a
  for (int i = 0; i < size; i++) {
    fprintf(stdout, "%c ", t[i]);
  }
  fprintf(stdout, "\n");

  // Print the sorted ASCII integer values
  for (int i = 0; i < size; i++) {
    fprintf(stdout, "%d ", t[i]);
  }
  fprintf(stdout, "\n");

  return 0;
}

void sort(char a[], int size) {
  char memory;
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (a[j] > a[j + 1]) {
        memory = a[j+1];
        a[j+1] = a[j];
        a[j] = memory;
      }
    }
  }
  fprintf(stdout, "Minimālā vērtība: %c \n", a[0]);
  fprintf(stdout, "Lielākā vērtība: %c \n", a[size - 1]);
}

void videjais(char a[], int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += a[i];
  }
  int vid = sum / size;
  fprintf(stdout, "Vidējā vērtība: %c\n", vid);
}

void median(char a[], int size)
{
  if (size % 2 == 0) {
    float med;
    med = (a[(size - 1) / 2] + a[size / 2]) / 2.0;
    fprintf(stdout, "Mediānai nav simbola\n");
  }
  else {
    char med;
    med = a[size / 2];
    fprintf(stdout, "Mediāna: %c\n", med);
  }
}
void moda(char a[], int len) {
  int counts[126] = {0};
  int daudzums = 0; 
  for (int i = 0; i < len; i++) {
    counts[(int)a[i]]++;
  }
  for (int i = 0; i < 126; i++) {
    if (counts[i] > daudzums) {
      daudzums = counts[i];
    }
  }
  fprintf(stdout, "Visbiežākais simbols/i: ");
  for (int i = 0; i < 126; i++) {
    if (counts[i] == daudzums) {
      fprintf(stdout, "%c, ", (char)i);
    }
  }
  fprintf(stdout, "(skaits: %d)\n", daudzums);
}
