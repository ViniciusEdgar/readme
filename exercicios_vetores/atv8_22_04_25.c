#include <stdio.h>

int main() {
    float numeros[10];
    float quadrados[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite o %dº número real: ", i + 1);
        scanf("%f", &numeros[i]);
        quadrados[i] = numeros[i] * numeros[i];
    }

    printf("\nNúmeros inseridos:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", numeros[i]);
    }

    printf("\nQuadrados números:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f - ", quadrados[i]);
    }

    return 0;
}