#include <stdio.h>
#define LINHAS 10
#define COLUNAS 10
// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
    int tab[LINHAS][COLUNAS];

    // Inicializa a matriz com zeros
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            tab[i][j] = 0;
        }
    }

    // Inserção do primeiro navio na diagonal (descendo da esquerda para a direita)
    int i = 3, j = 0;
    for (int t = 0; t < 4; t++) {
        tab[i][j] = 3;
        i--; j++;  // Movendo para cima e para a direita
    }

    // Inserção do segundo navio na horizontal
    i = 1; j = 5;
    for (int t = 0; t < 4; t++) {
        tab[i][j + t] = 3;  // Movendo para a direita
    }

    // Inserção do terceiro navio na vertical
    i = 4; j = 2;
    for (int t = 0; t < 4; t++) {
        tab[i + t][j] = 3;  // Movendo para baixo
    }

    // Inserção do quarto navio na diagonal (subindo da esquerda para a direita)
    i = 6; j = 6;
    for (int t = 0; t < 4; t++) {
        tab[i + t][j + t] = 3;  // Movendo para baixo e para a direita
    }

    // Impressão da matriz
    for (int i = 0; i < LINHAS; i++) { 
        for (int j = 0; j < COLUNAS; j++) {
            printf(" %d \t", tab[i][j]);
        }
        printf("\n");
    }

    // Coordenadas dos navios
    printf("\nO navio #1 está nas coordenadas (3,0), (2,1), (1,2), (0,3)\n");
    printf("O navio #2 está nas coordenadas (1,5), (1,6), (1,7), (1,8)\n");
    printf("O navio #3 está nas coordenadas (4,2), (5,2), (6,2), (7,2)\n");
    printf("O navio #4 está nas coordenadas (6,6), (7,7), (8,8), (9,9)\n");




    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
