// CALCULADORA
//DIREITOS RESERVADOS A IAGO SILVA.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
int operacao;
double numero,numero2;
double resultado;

printf("(1)raiz quadrada\n");
printf("(2)Log na base 10\n");
printf("(3)Arredonda float para o maior inteiro proximo\n");
printf("(4)Arredonda float para o menor inteiro proximo\n");
printf("(5)digite dois numero na forma x e y e imprime x^y\n");

printf("----------------------\n");
printf("Escolha uma operacao: \n");
printf("----------------------\n");
printf("operacao: ");

scanf("%d", &operacao);

  if (operacao == 1)
  {
    printf("Digite o numero que quer saber a raiz\n");
    printf("OBS: PRECISA SER MAIOR QUE ZERO\n");
    printf("Numero: ");
    scanf("%lf", &numero);
    double resultado = sqrt(numero);
    printf("***resultado: %.1lf***\n", resultado);

  } else if (operacao == 2)
  {
    printf("Digite o numero que quer saber o Log10\n");
    printf("OBS: PRECISA SER MAIOR QUE ZERO\n");
    printf("Numero: ");
    scanf("%lf", &numero);
    double resultado = log10(numero);
    printf("***resultado: %.1lf***\n", resultado);
  } else if (operacao == 3)
  {
    printf("Digite o numero que quer arredondar para o maior inteiro proximo!\n");
    printf("Numero: ");
    scanf("%lf", &numero);
    double resultado = floor(numero);
    printf("***resultado: %.1lf***\n", resultado);
  } else if (operacao == 4)
  {
    printf("Digite o numero que quer arredondar para o menor inteiro proximo!\n");
    printf("Numero: ");
    scanf("%lf", &numero);
    double resultado = ceil(numero);
    printf("***resultado: %.1lf***\n", resultado);
  } else
  {
    printf("Digite DOIS numeros para elevar um a outro\n");
    printf("exemplo : x e y = x^y\n");
    printf("Numero1: ");
    printf("Numero2: ");
    scanf("%lf %lf", &numero, &numero2);
    double resultado = pow(numero, numero2);
    printf("***resultado: %.1lf***\n", resultado);
  }
return 0;
}
