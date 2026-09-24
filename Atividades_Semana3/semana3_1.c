/*
algoritmo que leia 9 valores em um tabuleiro de jogo da velha
e verifica se o jogador venceu.
*/

#include <stdio.h>

int main(){
    // valores de entrada das casas do tabuleiro
    int a, b, c,
        d, e, f,
        g, h, i;
    // sacnf para pegar os valores jogados
    printf("Digite os 9 valores do tabuleiro (0 ou 1):\n");
    scanf(" %d %d %d", &a, &b, &c);
    scanf(" %d %d %d", &d, &e, &f);
    scanf(" %d %d %d", &g, &h, &i);

    //conferir totas as combinações para ver se o jogador '1' ganhou
    if ((a && b && c) ||
        (d && e && f) ||
        (g && h && i) ||// horizontais
        (a && d && g) ||
        (b && e && h) ||
        (c && f && i) ||//verticais
        (a && e && i) ||
        (c && e && g) ) //diagonais
            printf("O jogador venceu\n");

    else
        printf("O jogador NAO venceu\n");
    return 0;
}

