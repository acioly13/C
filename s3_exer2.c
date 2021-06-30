#include <stdio.h>
// std = Standart(Padrao)
// io = input/output(Entrada/Saida)

int main(void){
    // Declaração variavel
    float qtd_min, qtd_max, media;

    // Entrada Dados
    printf("Digite a quantidade minima: ");
    scanf("%f", &qtd_min);
    printf("Digite a quantidade maxima: ");
    scanf("%f", &qtd_max);

    // Processamento Dados
    media = (qtd_min + qtd_max) / 2;

    // Saida Dados
    printf("Media: %f",media);
    return 0;
}