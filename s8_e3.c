#include <stdio.h>
int main(){
    // variaveis
    int vetor[5];
    // entrada
    for (int i = 0; i < 5; ++i) {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }

    printf("[ ");
    for (int i=4; i>=0; i--){
        printf("%d ", vetor[i]);
    }
    printf("]");

    // processamento


}