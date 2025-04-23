#include <stdio.h>

int main() {
    int vetor[10];
    int i, pares = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0) {
            pares++;
        }
    }

    printf("Quantidade de números pares: %d\n", pares);

    return 0;
}