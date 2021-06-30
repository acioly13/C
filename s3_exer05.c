#include <stdio.h>
// std = Standart(Padrao)
// io = input/output(Entrada/Saida)

int main(void){
    // Declaração variavel
    int metros, centi;

    // Entrada Dados
    printf("Metros: ");
    scanf("%d", &metros);

    // Processamento Dados
    centi = (metros * 100);

    // Saida Dados
    printf("%d são %d centimetros",metros,centi);
    return 0;
}