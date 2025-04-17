#include <stdio.h>
int main() {
    int numero;
    
    printf("Insira o número:\n");
    scanf("%d", &numero);
    
    if (numero % 2 == 0) {
        printf("O número %d é par!", numero);
    } else {
        printf("O número %d é impar!", numero);
    }
    
    return 0;
}