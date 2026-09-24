/*
     programa que, a partir de tres valores inteiros fornecidos pelo usuario, vericica se eles
podem ser as medidas dos lados de um triangulo. Em caso positivo, vericicar se o triangulo e equilatero, isosceles
ou escaleno.

*/

#include <stdio.h>

int main (){
    // Entradas - Lados do triangulo
    int a, b, c;

    // Ler os valores dos lados do triangulo
    printf("Entre o lado 1: ");
    scanf("%d", &a);

    printf("Entre o lado 2: ");
    scanf("%d", &b);

    printf("Entre o lado 3: ");
    scanf("%d", &c);

    // verificar se pode ser triangulo
    if ((a + b > c && b + c > a && a + c > b)&&
        (a && b && c)){
        if (a == b && b == c) printf("triangulo equilatero\n");
        else if (a == b || b == c || a == c) printf("triangulo isosceles\n");
        else printf("triangulo escaleno\n");
    }
    else
        printf("triangulo invalido\n");

    return 0;
}
