i = 0
0 ... 6
(int i = 0; i < (n - 1); i++)
#include <stdio.h>
#include <stdlib.h>
int main (){

  int a1 = 1;
  int r = 2;
  int n = 7;
  int an = 0;

  //an = a1 + (n - 1) * r;

  for (int i = 0; i < (n - 1); i++) {
    a1 += r;
  }
  an = a1;

  printf("%d\n", an);
  return 0;

}
