#include <stdio.h>
#include <string.h>

int main() {
    char nomes[6][50];
    float pr1[6], pr2[6], media[6];
    char situacao[6][10];

    for(int i = 0; i < 6; i++){
        printf("Nome do aluno %d: ", i+1);
        scanf("%s", nomes[i]);
        printf("Nota PR1: ");
        scanf("%f", &pr1[i]);
        printf("Nota PR2: ");
        scanf("%f", &pr2[i]);
        
        
        media[i] = (pr1[i] + pr2[i]) / 2;
        if (media[i > 5]){
            strcpy(situacao[i], "Aprovado");
        } else {
            strcpy(situacao[i], "Reprovado");
        }
    }
    
    printf("\n Resultado \n");
    for (int i = 0; i < 3; i++) {
        printf("%s - Média : %.2f - %s\n", nomes[i], media[i], situacao[i]);
    }
    
    return 0;
}