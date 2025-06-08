#include <stdio.h>

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
