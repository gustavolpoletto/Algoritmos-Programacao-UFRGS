// Contador em binario (invertido) para programa em arduino

#include <stdio.h>

int main(){
    for (int i = 0 ; i < 16; i++){
        printf("%2d -> ", i);
        
        for (int j = 0; j < 4; j++){
            printf("%d ", i >> j & 1);

        }
             
        printf("\n");

    }
}