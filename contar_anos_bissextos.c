#include <stdio.h>
int main (){

  int ano;
  int quantidade = 0;
    for (ano = 2019; ano < 2050; ano++) {
      if ((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0))){
        printf("%d \n", ano);
        quantidade ++;
      }
    }
    printf("Quantidade de anos bi = %d\n", quantidade);
}
