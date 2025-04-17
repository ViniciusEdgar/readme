#include <stdio.h>
int main() {
    int idade;

    printf("Insira sua idade:\n");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("É adulto.");
    } else if (idade >= 12) {
        printf("É adolescente."); 
    } else {
        printf("É criança.");
    }

    return 0;
}