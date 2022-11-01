#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv){//paskatīties par pointeriem
  printf("ievadīts %d arguments:\n" , argc);

  printf(" sizeof(atoi(..)) -> %ld bytes \n",sizeof(atoi('A')));
  for(int i = 0; i < argc; i++){
     printf("%s\n" , argv[i]);
     if (i > 0){
	printf("%d*%d = %d\n",atoi(argv[i]),atoi(argv[i]), atoi(argv[i])*atoi(argv[i])); //atoi no simbola iegūst skaitli
											// "65" -> 65
     }
  }
  return 0;
}
