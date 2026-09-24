/* Aula Pratica 14/08 - 13:30
 calcular a media das notas com peso ponderado
 3 notas -> pesos: 0.3 ; 0.3; 0.4
*/

#include <stdio.h>

#define peso1 0.3
#define peso2 0.3
#define peso3 0.4

int main (){

    // Variaveis de entrada - Notas
    double nota1, nota2, nota3;
    //Variaveis de Saida - Media
    double media;

    // Ler valores
    printf("Entre nota 1: ");
    scanf("%lf", &nota1);

    printf("Entre nota 2: ");
    scanf("%lf", &nota2);

    printf("Entre nota 3: ");
    scanf("%lf", &nota3);

    // calcular a média ponderada
    media = nota1 * peso1 + nota2* peso2 + nota3 * peso3;

    //Imprimir a média final
    printf("A media ponderada do aluno e %.2lf\n", media);

    return 0;
}
