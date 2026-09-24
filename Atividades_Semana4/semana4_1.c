/*
    S1 = 0 + 2 + 4 + 6 +...+M
    S2 = 02 + 22 − 42 + 62 −...±M2
*/
#include <stdio.h>

int main (){
    // iniciar e ler valor de M
    int n;
    printf("Entre N:");
    scanf("%d", &n);

    if (n < 0){
        printf("O numero deve ser positivo");
        return 1;
    }


    // inicializar soluções
    int s1 = 0, s2 = 0;

    // calcular o s1
    for (int i = 0; i <= n; i += 2){
        s1 += i;
    }

    // calcular o s2
    int sinal = 1; //flag para saber se vai somar ou subtrair
                   // 1 para começar com negativo
    for (int i = 0; i <= n; i += 2){
        if (sinal == 1){
            s2 -= i * i;
            sinal = 0;
        }
        else {
            s2 += i * i;
            sinal = 1;
        }
    }

    // imprimir soluções
    printf("S1 = %d\nS2 = %d\n", s1, s2);
    return 0;
}

