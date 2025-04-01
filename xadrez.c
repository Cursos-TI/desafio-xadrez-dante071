#include <stdio.h>

/* Desafio de Xadrez - MateCheck
Nível Novato - Movimentação das Peças
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
    
    return 0;
}
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


