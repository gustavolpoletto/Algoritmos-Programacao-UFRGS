/* Aula Pratica 14/08 - 13:30
 Conversor de segundos para dias, horas, minutos e segundos
*/

#include <stdio.h>

#define seg_dia 86400
#define seg_hora 3600
#define seg_min 60
int main (){

    // Variavel de entrada - Segundos totais
    long int seg_in;
    //Variaveis de Saida
    int d, h, m, s;

    // Ler valor de segundos
    printf("Entre a quantidade de segundos: ");
    scanf("%d", &seg_in);

    // copiar a variavel seg_in para s que pode ser perdida
    s = seg_in;

    // calcular Dias
    d = s / seg_dia;
    s = s - d * seg_dia;

    // calcular Horas
    h = s / seg_hora;
    s = s - h * seg_hora;

    // calcular Minutos ( O que sobrar são os segundos )
    m = s / seg_min;
    s = s - m * seg_min;


    //Imprimir tempo final calculado
    printf("%d segundos correspondem a %d dias, %d horas, %d minutos e %d segundos.\n", seg_in, d, h, m, s);

    return 0;
}

