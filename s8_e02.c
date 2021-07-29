#include <stdio.h>
int  main(){
    int vetor1[3],vetor2[3],soma[3],valor1=0,valor2=0;
    for(int i=0;i<3;i++){
        printf("Digite um valor para vetor 1: ");
        scanf("%d", &vetor1[i]);
        printf("Digite um valor para vetor 2: ");
        scanf("%d", &vetor2[i]);
        soma[i] = (vetor1[i] + vetor2[i]);
    }
    printf("Soma dos vetores\n");
    printf("[ ");
    for(int i=0;i<3;i++){
        printf("%d ", soma[i]);
    }
    printf("]");
}