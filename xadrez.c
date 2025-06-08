#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


int main() {
    // Siimulação do movimento da Torre usando o laço **for**
    // A Torre vai se mover 5 casas para a direita
    int movimentoTorre = 5;
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Simulação do movimento do Bispo usando o laço **while**
    // O Bispo vai se mover 5 casas na diagonal "Cima Direita"
    int movimentoBispo = 5;
    int contadorBispo = 1;
    printf("Movimento do Bispo (5 casas para Cima Direita):\n");
    while (contadorBispo <= movimentoBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // Simulação do movimento da Rainha usando o laço **do-while**
    // A Rainha vai se mover 8 casas para a esquerda
    int movimentoRainha = 8;
    int contadorRainha = 1;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= movimentoRainha);

    // Fim do programa


    return 0;
}
