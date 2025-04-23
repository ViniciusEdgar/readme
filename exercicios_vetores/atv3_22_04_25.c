#include <stdio.h>

int main() {
    int numeros[6];
    int i;

    for (i = 0; i < 6; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    printf("\nOs números que foram digitados são:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    return 0;
}