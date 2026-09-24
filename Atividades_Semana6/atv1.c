
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_VETOR 20
#define MIN 1
#define MAX 10

int main()
{
    srand(time(NULL)); // mudar semente do rand
    int v[TAMANHO_VETOR]; // inicializacao vetor valores aleatorios
    int ocorrencias[MAX] = { 0 }; // inicializacao vetor para contar ocorrencias
    
    //geracao numeros aleatorios
    for (int i = 0 ; i < TAMANHO_VETOR; i++){
        v[i] = MIN + (rand() % MAX - MIN + 1);
    }
    
    // mostrar vetor gerado com numeros aleatrios
    printf("Vetor Gerado:\n");
    for (int i = 0 ; i < TAMANHO_VETOR; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
    printf("\n");
    
    // contar ocorrencias de cada numero
    for (int i = 0 ; i < TAMANHO_VETOR; i++){
        ocorrencias[v[i] - 1]++;
    }
    // mostrar ocorrencias
    for (int i = 0 ; i < MAX; i++){
        printf("Numero %d : %d vez(es)\n", i + 1, ocorrencias[i]);
    }
    printf("\n");

    
    // inicializar variaveis para calcular a media
    int soma = 0;
    float media;
    // guardar o somatorio dos valores gerados
    for (int i = 0 ; i < TAMANHO_VETOR; i++){
        soma += v[i];
    }
    // calcular e mostrar a media
    media = (float)soma / TAMANHO_VETOR;
    printf("Media: %.2f\n", media);
    printf("\n");

    
    // mostrar os numeros maiores que a media
    printf("Numeros maiores que a media:\n");
    for (int i = 0 ; i < TAMANHO_VETOR; i++){
        if (v[i] > media)
            printf("%d ", v[i]);
    }
    printf("\n");
    

    return 0;
}