#include <stdio.h>
int main(void){
    //variaveis
    int vetor[5],pares[5],c=0;
    for(int i = 0; i<5; i++){
        // ENtrada
        printf("Digite um valor: ");
        scanf("%d",  &vetor[i]);
        //Processamento
        if(vetor[i]%2 == 0){
            if(vetor[i]>0){
                pares[c] = vetor[i];
                c = c + 1;
            }
        }
    }
    for(int i = 0; i < c;i++){
        printf("%d\n", pares[i]);
    }
    
}
