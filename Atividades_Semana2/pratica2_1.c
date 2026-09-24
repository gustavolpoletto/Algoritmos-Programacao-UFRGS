
/* Aula Pratica 14/08 - 13:30
 calcule o tempo, em meses, necessário
 para que o valor economizado alcance um valor final,
 economizando X por mês
*/

#include <stdio.h>

int main (){

    // Variaveis de entrada
    double inicial, valor, valor_mes;
    //Variaveis de Saida
    double tempo;

    // Ler valores
    printf("Entre o saldo inicial: ");
    scanf("%lf", &inicial);

    printf("Entre o valor desejado: ");
    scanf("%lf", &valor);

    printf("Entre o valor economizado por mês: ");
    scanf("%lf", &valor_mes);

    // calcular o valor faltante para o preço final
    valor -= inicial;

    // calcular quanto tempo para chegar no valor faltante
    tempo = (float)valor / valor_mes;

    printf("O tempo necessário é %.2f meses\n", tempo);


    return 0;
}

