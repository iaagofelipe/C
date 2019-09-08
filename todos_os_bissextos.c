#include <stdio.h>
int main (){

  int ano;
    for (ano = 1720; ano < 2019; ano++) {
      if ((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0))){
        printf("%d \n", ano);
      }
    }
}
