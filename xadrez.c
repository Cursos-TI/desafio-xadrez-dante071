#include <stdio.h>

/* Desafio de Xadrez - MateCheck
Nível Aventureiro - Movimentação do Cavalo
*/


int main() {

    int torre = 0, bispo = 0, rainha = 0;
    
// Mover a Torre 5 casas para a direita 
    printf("Movimento da Torre: \n");

    for (torre = 0; torre < 5; torre++)
    {
        printf("Direita\n"); //Imprime a direção de movimento da torre
    }

// Mover o Bispo 5 casas diagonal (cima e à direita)
    printf("\nMovimento do Bispo: \n");

    while (bispo < 5)
    {
        printf("Cima, Direita\n");
        bispo++;
    } 

// Mover a Rainha 8 casas para a esquerda
    printf("\nMovimento da Rainha: \n");

    do
    {
        printf("Esquerda\n");
        rainha++;
    } while (rainha < 8);

    // Mover o Cavalo em L
    printf("\nMovimento do Cavalo: \n");

    // Declarando `cavalo` e `parabaixo` fora dos loops
    int parabaixo = 0, cavalo = 0;

    // Loop `while` para mover o Cavalo para baixo
    while (parabaixo < 2) 
    {
        // Loop `for` aninhado para imprimir "Baixo"
        for (cavalo = 0; cavalo < 1; cavalo++) 
        {
            printf("Baixo\n");  // Imprime "Baixo"
        }
        parabaixo++;  // Incrementa para o próximo movimento para baixo
    }

    // Agora, o Cavalo se move para a esquerda (apenas uma vez)
    for (cavalo = 0; cavalo < 1; cavalo++) 
    {
        printf("Esquerda\n");  // Imprime "Esquerda"
    }
    
    return 0;
}

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


