#include <stdio.h>

int main() {
    int vetor[11];
    int i;

    for (i = 0; i < 11; i++) {
        vetor[i] = 10 + i;
    }

    printf("Números ímpares de 10 a 20:\n");
    for (i = 0; i < 11; i++) {
        if (vetor[i] % 2 != 0) {
            printf("%d ", vetor[i]);
        }
    }

    return 0;
}