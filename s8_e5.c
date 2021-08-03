#include <stdio.h>
int main(){
    // variaveis
    int vetor[5];
    char maior_50 = 0;

    // entrada
    for (int i = 0; i < 5; ++i) {
        printf("Digite um valor (%d/5): ", (i+1));
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < 5; i++) {
        if (vetor[i]>50){
            printf("O numero %d está na posição %d\n", vetor[i],i);
            maior_50 = 1;
        }
    }

    if(maior_50<1){
        printf("Não existem numeros maiores que 50");
    }

    // processamento


}