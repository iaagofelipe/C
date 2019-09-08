#include <stdio.h>
int main ()
{

  // Verificar se o ano é bissexto
  printf("DIGITE UMA DATA!\n");
  int ano;
  scanf ("%d", &ano);

  //Recebe o valor e faz as veificações

    if ((ano % 400 == 0) || ((ano % 4 == 0) & (ano % 100 != 0)))
    {
      printf("O ano é bissexto\n");
    }
    else
    {
      printf("O ano NÃO é bissexto\n");
    }
}
