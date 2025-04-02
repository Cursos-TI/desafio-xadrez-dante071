#include <stdio.h>

/* Desafio de Xadrez - MateCheck
Nível Mestre - Criando função recursiva para os movimentos
*/

void moverTorre(int casas) // Movimento da Torre
{
    if (casas > 0)  // Condição de parada
    {
    printf("Direita \n");
    moverTorre(casas - 1);  // Chama a si mesma com uma casa a menos
    }
}

void moverRainha(int casa) // Movimento da Rainha 
{
    if (casa > 0) // Condição de parada
    {
        printf("Esquerda \n");
        moverRainha(casa - 1); // Chama a si mesma com uma casa a menos
    }   
}

void moverBispo(int vertical, int horizontal) // Movimento do Bispo 
{
    if (vertical > 0) // Condição de parada
    {
        for (int i = 0; i < horizontal; i++) // Mover para direita 
        {
            printf("Cima, Direita \n");
        }

        moverBispo(vertical - 1, horizontal); // Chama a si mesma com uma casa a menos
    }  
}

void moverCavalo()
{
    for (int i = 0;i < 2; i++)
    {
        if (i > 1)
        {
            
        }
        printf("Cima \n");
    }

    for (int j = 0; j < 1; j++)
    {
        printf("Direita \n");
        break;
    }
}


int main() {

    int quantidadeTorre = 5, quantidadeRainha = 8, quantidadeBispo = 5;
    
    printf("Movimento da Torre: \n");
    moverTorre(quantidadeTorre);

    printf("\nMovimento da Rainha: \n");
    moverRainha(quantidadeRainha);

    printf("\nMovimento do Bispo: \n");
    moverBispo(quantidadeBispo, 1); // Vertical = 5, Horizontal = 1

    printf("\nMovimento do Cavalo: \n");
    moverCavalo();

    return 0;
}