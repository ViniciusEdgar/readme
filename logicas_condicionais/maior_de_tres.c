#include <stdio.h>
int main() {
    int n1, n2, n3;
    
    printf("Insira os três números a serem analisados:\n");
    scanf("%d %d %d", &n1, &n2, &n3);
    
    if (n1 == n2 && n2 == n3) {
        printf("Todos números são iguais.");
    } else if (n1 > n2) {
        printf("O %d é o maior número.", n1);
    } else if (n2 > n3) {
        printf("O %d é o maior número.", n2);
    } else {
        printf("O %d é o maior número.", n3);
    }
        

return 0;
}