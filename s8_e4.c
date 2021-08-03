#include <stdio.h>
int main(){
    // variaveis
    int vetor[10], soma=0;
    // entrada
    for (int i = 0; i < 5; ++i) {
        printf("Digite um valor (%d/5): ", (i + 1));
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
    }
    printf("\nSoma: %d", soma);

    // processamento


}