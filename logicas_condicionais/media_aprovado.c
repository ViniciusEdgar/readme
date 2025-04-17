#include <stdio.h>
int main() {
    float n1, n2, n3, media;
    
    printf("Insira as 3 notas\n");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    media = (n1 + n2 + n3)/3;
    
    if (media >= 6) {
        printf("Você está aprovado com uma média de: %.2f .", media);
    } else if (media <6 && media >4) {
        printf("Você está de recuperação com uma média de: %.2f .", media);
    } else {
        printf("Você está reprovado com uma média de: %.2f .", media);
    }
   
    return 0;
}