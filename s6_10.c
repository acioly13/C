#include <stdio.h>

int main(){
    // Declaração
    int idade;

    // Entrada
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    // Processamento
    if (idade >= 5 && idade <= 7){
        printf("Infantil A");
    }
    if (idade >= 8 && idade <= 11){
        printf("Infantil B");
    }
    if (idade >= 12 && idade <= 13){
        printf("Juvenil A");
    }
    if (idade >= 14 && idade <= 17){
        printf("Juvenil B");
    }
    if (idade >= 18){
        printf("Adulto ");
    }
}
