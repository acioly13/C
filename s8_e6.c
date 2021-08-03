#include <stdio.h>
int main(){
    int codigo=0, vetor[5], i=0;

    printf("Digite o codigo: ");
    scanf("%d", &codigo);

    if(codigo>0){
        for (int i = 0; i < 5; i++) {
            printf("Digite um valor (%d/5): ",(i + 1));
            scanf("%d", &vetor[i]);

        }
        if (codigo==1){
            printf("[");
            for (int i = 0; i < 5; i++) {

                printf(" %d ", vetor[i]);

            }
            printf("]");
        }
        if(codigo==2){
            i = 4;
            printf("[");
            while (i >= 0){
                printf(" %d ", vetor[i]);
                i = i - 1;
            }
            printf("]");
        }
    }
}