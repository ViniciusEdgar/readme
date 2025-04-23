#include <stdio.h>

int main() {
    int vetor[11];
    int i;

    for (i = 0; i < 11; i++) {
        vetor[i] = 10 + i;
    }

    printf("Pares de trás pra frente:\n");
    for (i = 10; i >= 0; i--) {
        if (vetor[i] % 2 == 0) {
            printf("%d ", vetor[i]);
        }
    }

    printf("\nNúmeros ímpares presetes:\n");
    for (i = 0; i < 11; i++) {
        if (vetor[i] % 2 != 0) {
            printf("%d ", vetor[i]);
        }
    }

    return 0;
}