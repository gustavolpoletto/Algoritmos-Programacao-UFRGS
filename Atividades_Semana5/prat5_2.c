/*
    Analisar todos os numeros ate N e descobrir o numero com mais divisores
*/

#include <stdio.h>

int main()
{
    // inicilalizacao das variaveis
    int n = -1;
    int num_mais_divisores = 0, maior_quant_divisores = 0;
    int divisores_atuais = 0;

    while (n < 0){
    printf("Entre N: ");
    scanf("%d", &n);
    }


    for (int i = 1; i <= n ; i++){ // analisar todos os numeros de 1 ate N
        divisores_atuais = 0;
        for (int j = 1; j <= i; j++){ // contar os divisores de cada numero i
            if (i % j == 0) divisores_atuais++;
        }
        if (divisores_atuais > maior_quant_divisores){ // se achar um numero com mais divisores, atualizar
            maior_quant_divisores = divisores_atuais;
            num_mais_divisores = i;
        }
    }
    //imprimir o resultado final
    printf("Numero com mais divisores: %d\n", num_mais_divisores);
    printf("Quantidade de divisores: %d\n", maior_quant_divisores);


    return 0;
}
