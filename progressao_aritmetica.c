#include <stdio.h>

int main()
{

// variáveis

int a1;
int an;
int r;
int n;



// imprimir na tela

  printf("Ditie o primeiro termo\n");
    scanf("%d", &a1);
  printf("Ditie o próximo termo\n");
    scanf("%d", &an);
  printf("Digite a razão\n");
    scanf("%d", &r);
  printf("Digite o número de termos\n");
    scanf("%d", &n);

// calcular
  an=a1+(n-1)*r;
  printf("%d\n", an);

}
