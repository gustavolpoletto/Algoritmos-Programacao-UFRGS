#include <stdio.h>

int main (){
    // variaveis para contar dias com esse clima
    int sol = 0, nub = 0, chu = 0;
    //variaveis auxiliares
    int sum_temp = 0, med_temp = 0, max_temp = -1000, h_max_temp = 0;
    //variavel para quardar o tempo atual
    int temp = 0;

    for (int i = 0 ; i <= 12; i+=3 ){
            //ler a temperatura
        printf("Temperatura registrada as %dh: ", i );
        scanf("%d", &temp);
            // somar temperatura
        sum_temp += temp;
            //verificar se e a maior temperatura
        if (temp > max_temp){
            max_temp = temp;
            h_max_temp = i;
        }

        // verificar condicao climatica e somar no caso
        int op;
        printf("Condicao do tempo (1-Ensolarado, 2-Nublado, 3-Chuvoso): " );
        scanf("%d", &op);

        switch(op){
        case 1:
            sol++;
            break;
        case 2:
            nub++;
            break;
        case 3:
            chu++;
            break;
        default:
            printf("opcao invalida\n");
        }

    }
    // imprimer resultados
    printf("\n");
    printf("Media das temperaturas: %.2f\n", (float)sum_temp / 5);
    printf("Maior temperatura: %d\n", max_temp );
    printf("Horario da maior temperatura: %dh\n", h_max_temp);

    printf("\n");
    printf("Medicoes com tempo ensolarado: %d\n", sol );
    printf("Medicoes com tempo nublado: %d\n", nub );
    printf("Medicoes com tempo chuvoso: %d\n", chu );

    return 0;
}
