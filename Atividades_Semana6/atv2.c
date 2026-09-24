
#include <stdio.h>
#include <string.h>

#define TAMANHO 20

int main(){
    // inicializacao strings
    char str1[TAMANHO], str2[TAMANHO];
    
    // fgets para pegar string do usuario
    printf("Entre a primeira string: ");
    fgets(str1, TAMANHO, stdin);
    str1[strlen(str1) - 1] = '\0';
    
    // inverter string e guardar em str2
    for (int i = 0; i < strlen(str1); i++){
        str2[i] = str1[strlen(str1) - 1  - i ]; 
    }
    str2[strlen(str1)] = '\0';
    printf("A string reversa eh : %s\n", str2);
    
    
    int flag_palindromo = 0;  // flag para marcar se nao eh palindromo
    for (int i = 0; i < strlen(str1); i++){
        int pos1 = strlen(str1) - 1  - i;
        
        // ler todas as letras como minusculas para nao diferenciar
        if (str1[i] >= 'A' && str1[i] <= 'Z') str1[i] += 32;
        if (str1[pos1] >= 'A' && str1[pos1] <= 'Z') str1[pos1] += 32;
        

        // se encontrar lugar que nao eh palindromo marcar na flag
        if (str1[i] != str1[pos1]){
            flag_palindromo = 1;
        }
    }
    // imprimir se eh palindormo
    if (flag_palindromo) printf("AS strings nao sao palindromos\n");
    else printf("AS strings sao palindromos\n");
    return 0;
}