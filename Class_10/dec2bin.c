#include <stdio.h>
int main(){
  /*
78 --> 0100 1110
7. bit saturs - 0 (0)100 1110
		(char)(c1<<0), (char)(c1>>7)
6. bit saturs - 1
		(unsigned char)(c1<<1), (unsigned char)(c1>>7) saglabā un printē vērtību
5. bit saturs - 1
		(unsinged char)(c1<<2), (unsingend char)(c1>>7) saglabā turpat un printē tagad esošo vērtību
...
0. bit saturs - 0
		(unsigned char)(c1<<7), (unsinged char)(c1>>7)

iespējams arī filtrēt ar maskas izmantošanu piem. & 1000 0000, kur tiek saglabāta tikai 7. bita vērtību
*/
  return 0;
}
