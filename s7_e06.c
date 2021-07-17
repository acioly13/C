#include <stdio.h>
int main(void){
    int n, valor, i;
    printf("Digite um numero: ");
    scanf("%d", &n);

    while(n > 10){
        printf("\nNumero deve ser menor que 10");
        printf("\nDigite um numero: ");
        scanf("%d", &n);
    }
    printf("Tabuada de %d",n);
    for(i=0;i<=10;i++){
        valor = n * i;
        printf("\n%d X %d = %d",n,i,valor);
    }
}
