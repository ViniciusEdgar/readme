#include <stdio.h>
int main() {
    int num, tb;
    
    printf("Insira o número\n");
    scanf("%d", &num);
    
        for(tb = 0; tb <=10;tb++) {
        printf("%d\n", num*tb);
    } 
    
return 0;
}