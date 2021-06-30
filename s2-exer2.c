#include <stdio.h>
// std = Standart(Padrao)
// io = input/output(Entrada/Saida)

int main(void){
    // Declaração variavel
    int num1, num2, soma, multiplicacao;

    //Entrada de dados
    printf("Infome o numero 1: ");
    scanf("%d", &num1);

    printf("Infome o numero 2: ");
    scanf("%d", &num2);

    //Processamento
    soma = num1 + num2;
    multiplicacao = soma * num1;

    //Saida
    printf("Resuldado Multiplicacao: %d", multiplicacao);
    return 0;
}
