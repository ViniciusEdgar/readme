#include <stdio.h>
#include <string.h>

int main(){
    char nome[30];
    int contA =0, contE=0;
    
    for (int i = 0; i< 3; i++){
        printf("Digite o nome %d: ", i);
        scanf("%s", nome);
        
        for(int j = 0; nome[j] != '\0'; j++) {
            char letra = nome[j];
            
            if (letra == 'E' || letra == 'e'){
                contE++;
            }
            if (letra == 'A' || letra =='a'){
                contA++;
            }
        }
    }

    printf("Total de letra A: %d\n", contA);
    printf("Total de letra E: %d\n", contE);

    return 0;
}