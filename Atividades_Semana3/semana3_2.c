/*
   algoritmo que le a idade de uma pessoa e informe a sua classe eleitoral
*/

#include <stdio.h>

int main(){
    // variavel para pegar a idade
    int idade;

    // ler a idade
    printf("Entre a idade - ");
    scanf("%d", &idade);

    //conferir a classe eleitoral da pessoa
    if (idade < 16) printf("Nao eleitor");
    else if (idade >= 18 && idade <= 69) printf("Eleitor obrigatorio");
        //de 16 até 17 anos e 70 anos ou mais
    else printf("Eleitor facultativo");

    return 0;
}

