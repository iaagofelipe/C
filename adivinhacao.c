


#include <stdio.h>
#include <stdlib.h>

#include <time.h>


int main() 
{
    printf ("TODOS OS DIREITOS RESERVADOS A IAGO SILVA\n\n\n");
// ISSO SÃO APENAS DESENHOS

    printf (" ______ ________  ___   _   _ _____ _   _______ _____ _____    _ _  \n");
    printf (" | ___ |  ___|  \\/  |  | | | |_   _| \\ | |  _  |  _  /  ___|  | | | \n");
    printf (" | |_/ | |__ | .  . |  | | | | | | |  \\| | | | | | | \\ `--.   | | | \n");
    printf (" | ___ |  __|| |\\/| |  | | | | | | | . ` | | | | | | |`--. \\  | | | \n");
    printf (" | |_/ | |___| |  | |  \\ \\_/ /_| |_| |\\  | |/ /\\ \\_/ /\\__/ /  |_|_| \n");
    printf (" \\____/\\____/\\_|  |_/   \\___/ \\___/\\_| \\_|___/  \\___/\\____/   (_(_) \n\n");

    printf ("ESSE EH UM JOGO DE ADIVINHACAO!! \n");
/*
    // imprime o cabeçalho do jogo
    printf ("******************************************\n");
    printf ("* Bem vindo ao nosso jogo de adivinhacao *\n");
    printf ("******************************************\n");
*/
    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand ();
    int numerosecreto = numerogrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;
    int acertou = 0;

    int nivel;
    printf ("Em qual nivel de dificuldade voce deseja jogar?\n");
    printf ("(1) Facil (2) Medio (3) Dificil\n\n");
    printf ("Escolha: ");
    scanf ("%d", &nivel);

 // Seleção do nível a ser jogado.

 
    int numerodetentativas;

    switch(nivel)
    {
        case 1:
            numerodetentativas = 15;
            break;
        case 2:
            numerodetentativas = 10;
            break;
        default:
            numerodetentativas = 5;
            break;
    }
    /*if (nivel == 1)
    {
        numerodetentativas = 20;
    }
    else if (nivel == 2)
    {
        numerodetentativas = 10;
    } else
    {
        numerodetentativas = 5;
    }
    */
    for (int i = 1; i <= numerodetentativas; i++)
    {
        // usuario digita um chute
        printf("Tentativa %d\n", tentativas);
        printf("Qual eh o seu chute? \n");

        scanf("%d", &chute);
        printf("seu chute foi %d\n", chute);

        if(chute < 0)
        {
            printf ("Voce nao pode chutar numeros negativos!\n");
            continue;
        }

        // condições

        acertou = (chute == numerosecreto);
        int maior = (chute > numerosecreto);

        if(acertou)
        {
            break;
        }
        else if(maior)
         {
            printf("seu chute foi maior que o numero secreto \n");
         }
         else
         {
            printf ("seu chute foi menor que o numero secreto\n");
         }
        tentativas++;

        double pontos_perdidos = abs(numerosecreto - chute) / (double)2;
        pontos = pontos - pontos_perdidos;

    }

    printf ("Fim de jogo!\n\n");

    if (acertou)
    {

// ISSO SÃO APENAS DESENHOS


printf (" __      __                                 _                   _  \n");
printf (" \\ \\    / /                                | |                 | | \n");
printf ("  \\ \\  / ___   ___ ___     __ _  __ _ _ __ | |__   ___  _   _  | | \n");
printf ("   \\ \\/ / _ \\ / __/ _ \\   / _` |/ _` | '_ \\| '_ \\ / _ \\| | | | | | \n");
printf ("    \\  | (_) | (_|  __/  | (_| | (_| | | | | | | | (_) | |_| | |_| \n");
printf ("     \\/ \\___/ \\___\\___|   \\__, |\\__,_|_| |_|_| |_|\\___/ \\__,_| (_) \n");
printf ("                           __/ |   \n");
printf ("                          |___/    \n\n");

        printf ("Voce acertou em %d tentativas!!!!!\n\n", tentativas);
        printf ("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf ("Total de pontos: %.1f\n", pontos);
        printf ("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        
    } else
    {




        printf ("Voce perdeu, tente de novo!\n");
    }

}