#include <stdio.h>

int main() {
    int vetor[11];
    int i;

    for (i = 0; i < 11; i++) {
        vetor[i] = 10 + i;
    }

    printf("Números 20 a 10 de trás pra frente:\n");
    for (i = 10; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }

    return 0;
}