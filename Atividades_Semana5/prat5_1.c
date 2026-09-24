/*
 adivinhar um número inteiro secreto entre 0 e 100.com dica
*/

#include <stdio.h>

// definir numero secreto
#define secreto 42

int main()
{
    // inicializa variaveis
    int n, tentativas = 0;

    printf("Entre o chute: ");
    scanf("%d", &n);
    tentativas++;

    while(n != secreto){

        if (n > secreto) // chutou um numero maior que o secreto
            printf("Numero secreto eh menor.\n");

        if (n < secreto)// chutou um numero menor que o secreto
            printf("Numero secreto eh maior.\n");

        if (tentativas >= 5){ // chegou na quinta tentativa
            if (secreto % 2 == 0 ) printf("Numero secreto eh par\n");
            else printf("Numero secreto eh impar!\n");
        }
        printf("Entre o chute: ");
        scanf("%d", &n);
        tentativas++;
    }

    printf("\nNumero Correto!\n ");
    return 0;
}
