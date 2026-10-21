#include <stdio.h>
#include <string.h>

int main (){
    int nl;
    do{
    printf("Entre com o numero de linhas:");
    scanf("%d", &nl);
    }while(nl<1 || nl > 10);

}