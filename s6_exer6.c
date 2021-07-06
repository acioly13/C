#include <stdio.h>

int main(){
    int n, e=0;

    printf("Digite as horas trabalhadas: ");
    scanf("%d", &n);

    if(n>50){
        e = (n - 50) * 20;
        n = 500 + e;
        printf("Salario: %d", n);
        printf("\nExtra: %d", e);
    }else{
        n = n * 10;
        printf("Salario: %d", n);
        printf("\nExtra: %d", e);
    }






}