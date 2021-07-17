#include <stdio.h>
int main(){
    //Declaração
    int valor,maior;
    //Entrada
    maior = 0;
    printf("Digite um valor: ");
    scanf("%d", &valor);
    //Processamento
    while(valor != 0){
        if(valor > maior){
            maior = valor;
        }
        printf("Digite um valor: ");
        scanf("%d", &valor);
    }
    //Saida
    printf("Maior Valor Recebido: %d", maior);
}