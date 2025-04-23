#include <stdio.h>

int main() {
    int numeros[5];
    int cubos[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
        cubos[i] = numeros[i] * numeros[i] * numeros[i];
    }
    
    printf("Numero:\n Cubo: \n");
    for (int i = 0; i < 5; i++){
        printf("%d-%d\n", numeros[i], cubos[i]);
    }

    return 0;
}