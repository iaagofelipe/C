#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char numero;
    char letra;
    printf("Digite um numero de 0 a 9: ");
    scanf("%c/n", &numero);
    setbuf(stdin,NULL); //apaga o "enter" dado no teclado
    isdigit(numero); // verifica se o valor digitado é um numero
    printf("Digite uma letra: ");
    scanf("%c",&letra);
    //fgets(letra,20,stdin);
    isalpha(letra);
   
    if(isdigit(numero) > 0){
        printf("o numero %c é válido\n", numero);
    } 
    else
    {
        printf("Digite um número válido\n");
    }
    if (isalpha(letra) > 0)
    {
        printf("a letra %c é válida\n", letra);
        
        letra = toupper(letra); //transforma em maiúscula
        printf("Maiuscula : %c \n\n", letra);

        letra = tolower(letra); // transforma em minúscula
        printf("Minuscula: %c \n\n", letra);
    }
    else
    {
        printf("Você não digitou uma letra!!!\n");
    }
    return 0;
}
