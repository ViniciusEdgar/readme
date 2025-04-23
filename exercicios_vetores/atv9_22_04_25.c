#include <stdio.h>

int main() {
    int vetor[8];
    int i, x, y, soma;

    for (i = 0; i < 8; i++) {
        printf("Digite o valor da posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Digite a posição X: ");
    scanf("%d", &x);
    
    printf("Digite a posição Y: ");
    scanf("%d", &y);

    if (x >= 0 && x < 8 && y >= 0 && y < 8) {
        soma = vetor[x] + vetor[y];
        printf("Soma dos valores nas posições %d e %d: %d\n", x, y, soma);
    } else {
        printf("Posições inválidas!\n");
    }

    return 0;
}
