#include <stdio.h>
int main(void){
    //Declaração
    int i, valor, maior=-999, menor=999, soma=0;
    float media;
    //Processamento
    for(i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &valor);
        if(valor > 0){
            if(valor > maior){
                maior = valor;
            }
            if(valor < menor){
                menor = valor;
            }
            soma = soma + valor;
        }else{
            i--;
        }
    }
    media = soma / 10.0;
    printf("\nMaior numero: %d", maior);
    printf("\nMenor numero: %d", menor);
    printf("\nMedia: %.2f", media);
}
