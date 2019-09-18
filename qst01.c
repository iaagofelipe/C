//JOGO DE DADOS (CROKET)
//TODOS OS DIREITOS RESERVADOS A IAGO SILVA.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(int argc, char const *argv[]) {

int dado1, dado2;
srand(time(NULL));
int soma_dados;
int n_lances = 0;
int pontos1, pontos_jogador = 0;
int ganhou, perdeu = 0;

  do {
    dado1 = 1 + rand() % 6;
    dado2 = 1 + rand() % 6;
    soma_dados = dado1 + dado2;

    printf("dado1: %d\n", dado1);
    printf("dado2: %d\n", dado2);
    printf("a soma foi %d\n", soma_dados);

    if (n_lances == 0){
      if (soma_dados == 7 || soma_dados == 11){
        printf("voce ganhou\n");
        ganhou = 1;
      } else if (soma_dados == 2 || soma_dados == 3 || soma_dados == 12){
        printf("perdeu =(\n");
        perdeu = 1;
      }else{
        pontos_jogador = soma_dados;
      }
      n_lances++;
    }else if (n_lances > 0) {
      pontos1 = soma_dados;
      if (pontos1 == pontos_jogador){
        printf("voce ganhou\n");
        ganhou = 1;
      }else if(soma_dados == 7){
        printf("perdeu =(\n");
        perdeu = 1;
      }
    }
  } while(ganhou != 1 && perdeu != 1);
  return 0;
}