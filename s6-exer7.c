#include <stdio.h>

int main(){
    int n1,n2,n3,n4;

    printf("Escreva N1: ");
    scanf("%d", &n1);
    printf("Escreva N2: ");
    scanf("%d", &n2);
    printf("Escreva N3: ");
    scanf("%d", &n3);
    printf("Escreva N4: ");
    scanf("%d", &n4);

    n1 = n1 * n1;
    n2 = n2 * n2;
    n3 = n3 * n3;
    n4 = n4 * n4;

    if(n3>100){
        printf("\nNumero 3: %d", n3);
    } else{
        printf("\nNumero 1: %d", n1);
        printf("\nNumero 2: %d", n2);
        printf("\nNumero 3: %d", n3);
        printf("\nNumero 4: %d", n4);
    }

}